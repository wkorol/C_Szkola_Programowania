//
//  cwiczenie3.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main()
{
    float liczba;
    printf("Wprowadź liczbę zmiennoprzecinkową:\n");
    scanf("%f", &liczba);
    
    printf("Wpisano liczbę %.1f lub %.1e\n", liczba, liczba);
}