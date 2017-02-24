#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void pokaz_tablice(const double tab[], int n);
double * nowa_tablica(int n, ...);
int main()
{
    double * w1;
    double * w2;
    w1 = nowa_tablica(5, 1.2, 2.3, 3.4, 4.5, 5.6);
    w2 = nowa_tablica(4, 100.0, 20.00, 8.08, -1890.0);
    pokaz_tablice(w1, 5);
    pokaz_tablice(w2, 4);
    free(w1);
    free(w2);
    return 0;
}

double * nowa_tablica(int n, ...)
{
   double *tab = malloc ((n)*sizeof(double));
    
    va_list ap;
    int i;
    va_start(ap, n);
    //zainicjowanie ap lista argumentow
    for (i=0; i < n; i++) {
        tab[i]= va_arg(ap, double);
    }
    //dostep do kazdego elementu w liscie argumentow
    va_end(ap); //czyszczenie
    
    
    return tab;
}

void pokaz_tablice(const double tab[], int n)
{
    int i;
    
    for (i=0; i<n; i++) {
        printf("%.2lf ", tab[i]);
    }
    putchar('\n');
}
