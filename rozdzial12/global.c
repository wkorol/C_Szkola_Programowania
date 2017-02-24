//
//  global.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
int jednostki = 0; //zmienna zewn.
void krytyka(void);
int main(void)
{
    extern int jednostki; //powtorna (opcjonalna) deklaracja
    printf("Ile funtow masla miesci się w baryłce?\n");
    scanf("%d", &jednostki);
    while(jednostki != 56)
        krytyka();
    printf("Musiales podejrzec!\n");
    
    return 0;
}

void krytyka(void)
{
    //pominieto powtorna opcjonalna deklaracje
    
    printf("Nie masz szczescia, sprobuj ponownie.\n");
    scanf("%d", &jednostki);
}