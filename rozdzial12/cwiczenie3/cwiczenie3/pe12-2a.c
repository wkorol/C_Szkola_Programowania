//
//  pe12-2a.c
//  cwiczenie3
//
//  Created by Wiktor Korol on 15.11.2015.
//  Copyright © 2015 Wiktor Korol. All rights reserved.
//

#include "pe12-2a.h"


int wybierz_tryb(int dokonany_wybor)
{
    int temp;
    if(dokonany_wybor != 0 && dokonany_wybor != 1)
    {
        printf("Wprowadziłeś niewłaściwy tryb\n");
        dokonany_wybor = temp;
        printf("Ostatni dobrze wprowadzony tryb = %d, uzyjemy go\n", dokonany_wybor);
        return dokonany_wybor;
    }
    else
    {
    temp = dokonany_wybor;
    return dokonany_wybor;
    }
}

void pobierz_dane(int a)
{
    float odleglosc = 0;
    float zuzycie = 0;
    
    if(a == 0)
    {
        printf("Wprowadz przebyta odleglosc w kilometrach:\n");
        scanf("%f", &odleglosc);
        printf("Wprowadz zuzyte paliwo w litrach:\n");
        scanf("%f", &zuzycie);
    }
    if(a == 1)
    {
        printf("Wprowadz przebyta odleglosc w milach\n");
        scanf("%f", &odleglosc);
        printf("Wprowadz zuzyte paliwo w galonach:\n");
        scanf("%f", &zuzycie);
    }
    
    wyswietl_dane(a, odleglosc, zuzycie);
}

void wyswietl_dane(int b, float odleglosc, float zuzycie)
{
    float wynik;
    if(b == 0)
    {
        wynik = zuzycie/(odleglosc/100);
        printf("Zuzycie paliwa wynioslo %.2f litrow na 100km\n", wynik);
    }
    if(b == 1)
    {
        wynik =  odleglosc/zuzycie;
        printf("Zuzycie paliwa wynioslo %.2f mil na galon\n", wynik);
    }
}