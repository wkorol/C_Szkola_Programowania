//mems.c -- stosowanie funkcji memcpy() i memmove()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROZMIAR 10
void pokaz_tablice(const int tab[], int n);
int main()
{
    int zrodlo[ROZMIAR] = {1,2,3,4,5,6,7,8,9,10};
    int cel[ROZMIAR];
    double ciekawostka[ROZMIAR/2] = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    puts("użyto memcpy():");
    puts("zrodlo (dane oryginalne): ");
    pokaz_tablice(zrodlo, ROZMIAR);
    memcpy(cel, zrodlo, ROZMIAR * sizeof(int));
    puts("cel (kopiowanie zrodla):");
    pokaz_tablice(cel, ROZMIAR);
    
    puts("\nUzycie funkcji memmove() z nakladajacymi sie obszarami:");
    memmove(zrodlo + 2, zrodlo, 5 * sizeof(int));
    puts("zrodlo -- elementy 0-5 kopiowanie do 2-7:");
    pokaz_tablice(zrodlo, ROZMIAR);
    
    puts("\nUzycie memcpy() do skopiowania double do int:");
    memcpy(cel, ciekawostka, (ROZMIAR/2) * sizeof(double));
    puts("cel -- 5 double do 10 int:");
    pokaz_tablice(cel, ROZMIAR);
    
    
    return 0;
}

void pokaz_tablice(const int tab[], int n)
{
    int i;
    for (i=0; i<n; i++) {
        printf("%d ", tab[i]);
    }
    putchar('\n');
}