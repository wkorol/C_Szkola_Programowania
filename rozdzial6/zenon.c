//
//  zenon.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>

int main(void)
{
    int licznik;
    double czas,x;
    int granica;
    printf("Ile wyrazow chcesz zsumowac?\n");
    scanf("%d", &granica);
    
    for(czas = 0, x=1, licznik =1; licznik<= granica; licznik++, x*=2.0)
    {
        czas +=1.0/x;
        printf("czas = %f gdy licznik = %d\n", czas, licznik);
    }
}