//
//  pomin.c
//  
//
//  Created by Wiktor Korol on 29.07.2015.
//
//

#include <stdio.h>
#define MIN 0.0f //stala typu float
#define MAX 100.0f
int main()
{
    float wynik;
    float suma = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;
    printf("Podaj wyniki:\n");
    while(scanf("%f", &wynik)==1)
    {
        if(wynik < MIN || wynik > MAX)
        {
            printf("%0.1f jest nieprawidlowa wartoscia.\n", wynik);
            continue;
        }
        printf("Przyjeto %0.1f:\n", wynik);
        min = (wynik < min)? wynik:min;
        max = (wynik > max)? wynik:max;
        suma+=wynik;
        n++;
    }
    if(n>0)
    {
        printf("Srednia z %d wynikow wynosi %0.1f.\n", n, suma/n);
        printf("Najnizszy = %0.1f, najwyzszy = %0.1f\n", min, max);
        
    }
    else
        printf("Nie podano zadnych prawidlowych wynikow.\n");
    return 0;
}