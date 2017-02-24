//
//  buty1.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define KOREKTA -1
#define MNOZNIK 0.666666
int main()
{
    double but, stopa;
    but = 42.0;
    stopa = MNOZNIK * but + KOREKTA;
    printf("Rozmiar buta     Dlugosc stopy\n");
    printf("%8.1f %15.2f cm\n", but, stopa);
    return 0;
    
}