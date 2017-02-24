//
//  wyswietl.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define PI 3.141593
int main(void)
{
    int liczba = 5;
    float likier = 13.5;
    int koszt = 3100;
    
    printf("%d kobiet wypilo %f kieliszkow likieru.\n", liczba, likier);
    printf("Wartosc pi to %f.\n", PI);
    printf("Zegnaj! Zbyt droga jestes, pani, by byc moja ");
    printf("(%c%d)\n", '$', 2*koszt);
    return 0;
}