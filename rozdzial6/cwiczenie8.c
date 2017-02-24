//
//  cwiczenie8.c
//
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
float obliczenie(float a, float b);

int main()
{
    float a,b;
    printf("Podaj dwie liczby zmiennoprzecinkowe: \n");
    while((scanf("%f %f", &a, &b)) == 2)
    {
        printf("%f\n", obliczenie(a,b));
        printf("Podaj dwie nastepne liczby zmiennoprzecinkowe\n");
        
    }
    printf("Program zakonczony\n");
    
    
    
    
    
    return 0;
}


float obliczenie(float a, float b)
{
    float obliczenie;
    
    obliczenie = (a-b)/(a*b);
    
    return obliczenie;

}