//
//  cwiczenie5.c
//  
//
//  Created by Wiktor Korol on 02.08.2015.
//
//

#include <stdio.h>

int main()
{
    int a;
    int parzyste=0, nieparzyste=0;
    float sr_p = 0, sr_n = 0;
    
    while (scanf("%d", &a) == 1 && a!=0) {
    
    switch (a%2) {
        case (0):
            parzyste++;
            sr_p = sr_p + a;
            break;
        default:
            nieparzyste++;
            sr_n = sr_n + a;
            break;
    }
    }
    
    printf("Wpisales %d parzystych, %d nieparzystych\n", parzyste, nieparzyste);
    printf("Srednia wartosc parzystej: %.2f, nieparzystej: %.2f\n", sr_p/parzyste, sr_n/nieparzyste);
    
    
    
    
    return 0;
}
