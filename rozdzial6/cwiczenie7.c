//
//  cwiczenie7.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
int main()
{
    float a,b;
    printf("Podaj dwie liczby zmiennoprzecinkowe: \n");
    while((scanf("%f %f", &a, &b)) == 2)
    {
        printf("%f\n", (a-b)/(a*b));
        printf("Podaj dwie nastepne liczby zmiennoprzecinkowe\n");
        
    }
    printf("Program zakonczony\n");
    
    
    
    
    
    return 0;
}