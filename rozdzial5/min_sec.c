//
//  min_sec.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define SEK_NA_MIN 60 //sekundy w minucie
int main()
{
    int sec, min, left;
    
    printf("Konwertuje sekundy na minuty i sekundy!\n");
    printf("Podaj liczbe sekund (<=0 to koniec):\n");
    scanf("%d", &sec);
    while(sec > 0)
    {
        min = sec / SEK_NA_MIN; // obcina liczbe minut
        left = sec % SEK_NA_MIN; //pozostala liczba sekund
        printf("%d sekund to %d minut, %d sekund.\n", sec, min, left);
        printf("Podaj kolejna wartosc (<=0 to koniec):\n");
        scanf("%d", &sec);
    }
    printf("Koniec!\n");
    
    return 0;
}