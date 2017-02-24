//
//  rzutkosc.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include "rzutkosc.h"
#include <stdio.h>
#include <stdlib.h> //potrzebujemy funkcji rand()
int licza_rzutow = 0; //lacznosc zewn
static int rzucaj(int scianki) //prywatne w ramach pliku
{
    int oczka;
    oczka = rand() % scianki + 1;
    ++liczba_rzutow; //zlicza wywolania funkcji
    
    return oczka;
}
int rzucaj_n_razy(int rzuty, int scianki)
{
    int k;
    int suma = 0;
    if(scianki < 2)
    {
        printf("Wymagane sa co najmniej 2 scianki.\n");
        return -2;
    }
    if(rzuty < 1)
    {
        printf("Wymagany co najmniej 1 rzut.\n");
        return -1;
    }
    
    for(k = 0; k<rzuty; k++)
        suma += rzucaj(scianki);
        
        
        return suma;
}
