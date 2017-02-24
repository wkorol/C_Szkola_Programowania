//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 15.11.2015.
//
//


#include <stdio.h>
//int jednostki = 0; //zmienna zewn.
int krytyka(int jednostki);
int main(void)
{
    int jednostki = 0; //powtorna (opcjonalna) deklaracja
    printf("Ile funtow masla miesci się w baryłce?\n");
    scanf("%d", &jednostki);
    while(jednostki != 56)
        jednostki = krytyka(jednostki);
    printf("Musiales podejrzec!\n");
    
    return 0;
}

int krytyka(int jednostki)
{
    //pominieto powtorna opcjonalna deklaracje
    
    printf("Nie masz szczescia, sprobuj ponownie.\n");
    scanf("%d", &jednostki);
    
    return jednostki;
}
