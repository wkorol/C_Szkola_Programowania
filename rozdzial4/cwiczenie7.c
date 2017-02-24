//
//  cwiczenie7.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>

#define GALON 3.785
#define MILA 1.609

int main()
{
    float mile;
    float galony;
    float zuzycie;
    float konwerter_1km;
    float zuzycie_km;
    
    printf("Ile przebyles mil: \n");
    scanf("%f", &mile);
    printf("Ile zuzyles galonow paliwa: \n");
    scanf("%f", &galony);
    
    zuzycie = mile/galony;
    
    konwerter_1km = galony*GALON / (mile*MILA);
    
    zuzycie_km = konwerter_1km * 100;
    
    printf("Zuzycie paliwa wynioslo %.1f mile/galon oraz %.1f litrow/100km\n", zuzycie, zuzycie_km);
    
    
    return 0;
}