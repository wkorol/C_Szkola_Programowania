//
//  main.c
//  cwiczenie8
//
//  Created by Wiktor Korol on 16.11.2015.
//  Copyright © 2015 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int * stworz_tabice (int elem, int wart);
void pokaz_tablice(const int tab[], int n);

int main(void)
{
    int *wt;
    int rozmiar;
    int wartosc;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &rozmiar);
    while(rozmiar > 0)
    {
        printf("Podaj wartosc poczatkowa: ");
        scanf("%d", &wartosc);
        wt = stworz_tabice(rozmiar, wartosc);
        if(wt)
        {
            pokaz_tablice(wt, rozmiar);
            free(wt);
        }
        printf("Podaj liczbe elementow(<1 - koniec): ");
        scanf("%d", &rozmiar);
        
    }
    printf("Koniec.\n");
    return 0;
}

int * stworz_tabice (int elem, int wart)
{
    int *wsk;
    int i;
    wsk = (int *) malloc(elem * sizeof(int));
    
    for(i=0; i<elem; i++)
    {
        wsk[i] = wart;
    }
    
    
    return wsk;
}

void pokaz_tablice(const int tab[], int n)
{
    int i;
    for (i=0; i<n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
}