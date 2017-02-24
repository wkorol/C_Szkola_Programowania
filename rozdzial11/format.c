//
//  format.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#define MAX 20
int main(void)
{
    char imie[MAX];
    char nazwisko[MAX];
    char forma1[2*MAX+10];
    double wygrana;
    
    puts("Podaj swoje imie:");
    gets(imie);
    puts("Podaj swoje nazwisko:");
    gets(nazwisko);
    puts("Podaj wygrana sume pieniedzy:");
    scanf("%lf", &wygrana);
    sprintf(forma1, "%s, %-19s: %6.2f zl\n", nazwisko, imie, wygrana);
    puts(forma1);
    return 0;
}