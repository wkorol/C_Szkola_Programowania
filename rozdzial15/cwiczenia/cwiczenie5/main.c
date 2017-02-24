//
//  main.c
//  cwiczenie5
//
//  Created by Wiktor Korol on 11.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
char * do_binar(int n, char *wsk);
void pokaz_binar(const char * lan);
void obroc_l(unsigned int n, int ilosc);

int main(int argc, const char * argv[]) {
    unsigned int n;
    int ilosc;
    
    printf("Wprowadź liczbę, którą chcesz obrócić: ");
    scanf("%d", &n);
    printf("O ile miejsc chcesz przesunac w lewo: ");
    scanf("%d", &ilosc);
    obroc_l(n, ilosc);
    
    
    
    return 0;
}

void obroc_l(unsigned int n, int ilosc)
{
    char bin[32];
    unsigned int temp;
    
    do_binar(n, bin);
    pokaz_binar(bin);
    temp = n>>(32-ilosc);
    n<<=ilosc;
    
    n = n|temp;
    
    do_binar(n, bin);
    pokaz_binar(bin);
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