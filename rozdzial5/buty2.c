//
//  buty2.c
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
    
    printf("Rozmiar buta    Dlugosc stopy\n");
    but = 24.0;
    while (but < 45)
    {
        stopa = MNOZNIK * but + KOREKTA;
        printf("%8.1f %15.2f cm\n", but, stopa);
        but = but + 1.0;
    }
    printf("Jestli but pasuje, nos go.\n");
    return 0;
    
}