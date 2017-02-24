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
static int rzucaj(int scianki, int kosci) //prywatne w ramach pliku
{
    int oczka, i, suma = 0;
    for(i=0; i<kosci; i++)
    {
        oczka = rand() % scianki + 1;
        suma += oczka;
    }
        
    return suma;
}
int rzucaj_n_razy(int kosci, int scianki)
{
    int suma = 0;
    if(scianki < 2)
    {
        printf("Wymagane sa co najmniej 2 scianki.\n");
        return -2;
    }
    if(scianki < 1)
    {
        printf("Wymagana co najmniej 1 scianka.\n");
        return -1;
    }
    
        suma += rzucaj(scianki, kosci);
        
        
        return suma;
}
