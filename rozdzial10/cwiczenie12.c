//
//  cwiczenie12.c
//  
//
//  Created by Wiktor Korol on 18.10.2015.
//
//

#include <stdio.h>
#define WIERSZE 3
#define KOLUMNY 5
void proszenie(double tab[][KOLUMNY], int wiersze);
void srednia(double tab[][KOLUMNY], int wiersze);
void srednia_cala(double tab[][KOLUMNY], int wiersze);
double najwieksza_wartosc(double tab[][KOLUMNY], int wiersze);
int main()
{
    double tab[WIERSZE][KOLUMNY];
    double max;
    
    proszenie(tab, WIERSZE);
    srednia(tab, WIERSZE);
    srednia_cala(tab, WIERSZE);
    max = najwieksza_wartosc(tab,WIERSZE);
    
    printf("Najwieksza wartosc sposrod wszystkich wprowadzonych to %.2f\n", max);
    
    
    return 0;
}

void proszenie(double tab[][KOLUMNY], int wiersze)
{
    int w;
    int k;
    printf("Zaczynamy wprowadzanie danych!\n");
    printf("Zacznijmy od zbioru 1, podaj piec liczb typu double: ");
    for(w=0; w<wiersze; w++)
    {
        for(k=0; k<KOLUMNY; k++)
        {
            scanf("%lf", &tab[w][k]);
            if(k!=4)
            printf("Wprowadziles %d liczbe, jeszcze %d liczb\n", k+1, KOLUMNY-k-1);
        }
        if(w<2)
        printf("Ok, %d zbior wypelniony, przechodzimy do zbioru %d, podaj piec liczb typu double: ", w+1, w+2);
    }
    
}

void srednia(double tab[][KOLUMNY], int wiersze)
{
    int w;
    int k;
    double srednia = 0;
    
    for(w = 0; w<wiersze; w++)
    {
        for(k=0, srednia = 0;k<KOLUMNY; k++)
            srednia = srednia + tab[w][k];
        if(w<3)
            printf("Srednia dla zbioru %d = %.2f\n", w+1, srednia/KOLUMNY);
    }
    
    
}

void srednia_cala(double tab[][KOLUMNY], int wiersze)
{
    int w;
    int k;
    double srednia = 0;
    
    for(w = 0; w<wiersze; w++)
    {
        for(k=0;k<KOLUMNY; k++)
            srednia = srednia + tab[w][k];
        
    }
    printf("Srednia wszystkich wartosci = %f\n", srednia/(KOLUMNY*wiersze));
    
}

double najwieksza_wartosc(double tab[][KOLUMNY], int wiersze)
{
    int w, k;
    double max = tab[0][0];
    for(w = 0; w<wiersze; w++)
    {
        for(k=0;k<KOLUMNY; k++)
        {
            if(tab[w][k] > max)
                max = tab[w][k];
        }
    }
    return max;
}