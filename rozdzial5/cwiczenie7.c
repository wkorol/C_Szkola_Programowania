//
//  cwiczenie7.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>

void potega3(float n);
int main()
{
    float liczba;
    
    printf("Wprowadź liczbę:\n");
    scanf("%f", &liczba);
    
    potega3(liczba);
    
    
    return 0;
}

void potega3(float n)
{
    float wynik;
    wynik = n*n*n;
    printf("%.1f podniesiona do trzeciej potegi wynosi: %.1f\n", n, wynik);
}