//
//  main.c
//  cwiczenie2
//
//  Created by Wiktor Korol on 11.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>

int bin_to_dec(char *wbin);
char *do_binar (int n, char *wsk);
void pokaz_binar(const char * lan);

int main(int argc, const char * argv[]) {
    
    char first[32];
    char first_neg[32];
    char second[32];
    char second_neg[32];
    char dzialanie[32];
    int first_dec;
    int second_dec;
    int and;
    int or;
    int xor;
    
    printf("Wprowadź pierwszy łańcuch binarny\n");
    scanf("%s", first);
    printf("Wprowadź drugi łańcuch binarny\n");
    scanf("%s", second);
    
    first_dec = bin_to_dec(first);
    second_dec = bin_to_dec(second);
    
    printf("Pierwsza liczba to: %d\n", first_dec);
    do_binar(~first_dec, first_neg);
    printf("~%d = ", first_dec);
    pokaz_binar(first_neg);
    printf("Druga liczba to: %d\n", bin_to_dec(second));
    do_binar(~second_dec, second_neg);
    printf("~%d = ", second_dec);
    pokaz_binar(second_neg);
    putchar('\n');
    
    and = first_dec & second_dec;
    
    printf("%d & %d = ", first_dec, second_dec);
    pokaz_binar(do_binar(and, dzialanie));
    
    or = first_dec | second_dec;
    
    printf("%d | %d = ", first_dec, second_dec);
    pokaz_binar(do_binar(or, dzialanie));
    
    xor = first_dec ^ second_dec;
    
    printf("%d ^ %d = ", first_dec, second_dec);
    pokaz_binar(do_binar(xor, dzialanie));
    
    
    
    
    
    
    
    
}


int bin_to_dec (char * wbin) {
    
    int liczba = 0;
    while (*wbin != '\0')
    {
        liczba = 2 * liczba + (*wbin++ - '0');
    }
    
    return liczba;
}

char * do_binar(int n, char *wsk)
{
    int i;
    static int liczba = 8*sizeof(int);
    for (i=liczba-1; i>=0; i--, n>>=1) {
        wsk[i] = (01 & n) + '0';
    }
    wsk[liczba] = '\0';
    return wsk;
}
// wyswietl lancuch binarny w blokach po 4
void pokaz_binar(const char * lan)
{
    int i = 0;
    while (lan[i]) {
        putchar(lan[i]);
        if (++i % 4 == 0 && lan[i]) {
            putchar(' ');
        }
    }
    putchar('\n');
}