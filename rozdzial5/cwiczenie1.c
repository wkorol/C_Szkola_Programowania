//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define MINUTY_GODZ 60

int main()
{
    int minuty;
    int godziny;
    int pozostale_minuty;
    printf("Wprowadź liczbę minut: \n");
    scanf("%d", &minuty);
    printf("%d minut to %d godzin, %d minut\n", minuty, godziny = minuty/MINUTY_GODZ, pozostale_minuty = minuty%MINUTY_GODZ);
    
    return 0;
}