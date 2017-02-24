//
//  pobr_lanc.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
int main(void)
{
    char imie1[11], imie2[11];
    int licznik;
    printf("Podaj 2 imiona.\n");
    licznik = scanf("%5s %10s", imie1, imie2);
    printf("Odczytalem %d imiona: %s i %s.\n", licznik, imie1, imie2);
    return 0;
}