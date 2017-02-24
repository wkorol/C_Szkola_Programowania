//
//  plzmp.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#include <math.h>
int main(void)
{
    const double ODPOWIEDZ = 3.14159;
    double odp;
    
    printf("Jaka jest wartosc liczby PI?\n");
    scanf("%lf", &odp);
    while(fabs(odp-ODPOWIEDZ) > 0.0001)
    {
        printf("Sprobuj ponownie!\n");
        scanf("%lf", &odp);
    }
    printf("Wystarczajaco blisko!\n");
    
    return 0;
}