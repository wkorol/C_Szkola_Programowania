//elsklad.c -- elastyczny skladnik tablicowy
#include <stdio.h>
#include <stdlib.h>
struct elast
{
    int licznik;
    double srednia;
    double wynik[]; //elastyczny skladnik tablicowy
};

void pokazElast(const struct elast * p);
int main(void)
{
    struct elast *wsk1, *wsk2;
    int n =5;
    int i;
    int suma = 0;
    
    //przydzielenie pamieci dla struktury + tablicy
    wsk1 = malloc(sizeof(struct elast) + n * sizeof(double));
    wsk1->licznik = n;
    for (i=0; i<n; i++) {
        wsk1->wynik[i] = 20.0 - i;
        suma+=wsk1->wynik[i];
    }
    
    wsk1->srednia = suma/n;
    pokazElast(wsk1);
    
    n=9;
    suma = 0;
    wsk2 = malloc(sizeof(struct elast) + n * sizeof(double));
    wsk2->licznik = n;
    
    for (i=0; i<n; i++) {
        wsk2->wynik[i] = 20.0 - i/2.0;
        suma+=wsk2->wynik[i];
    }
    wsk2->srednia = suma/n;
    pokazElast(wsk2);
    free(wsk1);
    free(wsk2);
    
    return 0;
}

void pokazElast(const struct elast *p)
{
    int i;
    printf("Wynik: ");
    for (i=0; i<p->licznik; i++) {
        printf("%g  ", p->wynik[i]);
    }
    printf("\nSrednia: %g\n", p->srednia);
}