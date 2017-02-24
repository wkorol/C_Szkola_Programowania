//qsorter.c -- sortuje zbior liczb za pomoca funkcji qsort()
#include <stdio.h>
#include <stdlib.h>
#define NUM 40
void wypelnij_tab(double tab[], int n);
void pokaz_tab(const double tab[], int n);
int porownaj(const void * w1, const void *w2);
int main(void)
{
    double wart[NUM];
    wypelnij_tab(wart, NUM);
    puts("Lista losowa:");
    pokaz_tab(wart, NUM);
    qsort(wart, NUM, sizeof(double), porownaj);
    puts("\nLista uporzadkowana:");
    pokaz_tab(wart, NUM);
    return 0;
}

void wypelnij_tab(double tab[], int n)
{
    int index;
    
    for (index = 0; index < n; index++) {
        tab[index] = (double)rand()/((double) rand() + 0.1);
    }
}

void pokaz_tab(const double tab[], int n)
{
    int index;
    
    for (index = 0; index < n; index++) {
        printf("%9.4f ", tab[index]);
        if(index % 6 == 5)
            putchar('\n');
    }
    if(index % 6 != 0)
        putchar('\n');
}
//porzadkuje w kolejnosci rosnacej
int porownaj(const void * w1, const void *w2)
{
    //do odczytania wartosci potrzebne sa wskazniki do double
    const double *a1 = w1; //a1 jest wskaznikiem wlasciwego typu
    const double *a2 = w2;
    if(*a1 < *a2)
        return -1;
    else if(*a1 == *a2)
        return 0;
    else
        return 1;
}