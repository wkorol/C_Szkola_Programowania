//
//  break.c
//  
//
//  Created by Wiktor Korol on 29.07.2015.
//
//

#include <stdio.h>
int main()
{
    float dlugosc, szerokosc;
    printf("Podaj dlugosc prostokata:\n");
    while(scanf("%f", &dlugosc) == 1)
    {
        printf("Dlugosc = %0.2f:\n", dlugosc);
        printf("Podaj szerokosc prostokata:\n");
        if (scanf("%f", &szerokosc) != 1)
            break;
        printf("Szerokosc = %0.2f:\n", szerokosc);
        printf("Pole = %0.2f:\n", dlugosc * szerokosc);
        printf("Podaj dlugosc prostokata:\n");
    }
    
    
    
    return 0;
}