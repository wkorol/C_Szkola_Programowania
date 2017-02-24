//
//  tabf.c
//  
//
//  Created by Wiktor Korol on 12.10.2015.
//
//

#include <stdio.h>
#define ROZMIAR 5
void pokaz_tablice(const double tab[], int n);
void pomnoz_tablice(double tab[], int n, double mnoz);
int main(void)
{
    double dip[ROZMIAR] = {20.0, 17.66, 8.2, 15.3, 22.22};
    printf("Poczatkowa tablica dip:\n");
    pokaz_tablice(dip,ROZMIAR);
    pomnoz_tablice(dip, ROZMIAR, 2.5);
    printf("Tablica dip po wywolaniu funkcji pomnoz_tablice():\n");
    pokaz_tablice(dip, ROZMIAR);
    return 0;
}

void pokaz_tablice(const double tab[], int n)
{
    int i;
    for(i = 0; i<n; i++)
        printf("%8.3f ", tab[i]);
    putchar('\n');
}
//mnozy kazdy element tablicy przez te sama liczbe

void pomnoz_tablice(double tab[], int n, double mnoz)
{
    int i;
    for(i=0; i<n; i++)
        tab[i] *= mnoz;
}