//
//  defines.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#include <limits.h> //granice liczb calkowitych
#include <float.h> //granice liczb zmiennoprzecinikowych
int main(void)
{
    printf("Niektore granice liczbowe dla tego systemu:\n");
    printf("Najwiekszy int: %d\n", INT_MAX);
    printf("Najmniejsy long long: %lld\n", LLONG_MIN);
    printf("Jeden bajt = %d bitow (w tym systemie).\n", CHAR_BIT);
    printf("Najwiekszy double: %e\n", DBL_MAX);
    printf("Najmniejszy normalny float: %e\n", FLT_MIN);
    printf("float precyzja = %d cyfr:\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    
    return 0;
}