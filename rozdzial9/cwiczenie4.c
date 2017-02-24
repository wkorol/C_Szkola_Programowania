//
//  cwiczenie4.c
//  
//
//  Created by Wiktor Korol on 30.09.2015.
//
//

#include <stdio.h>

double srednia_harm(void);
int main()
{
    double x;
    x = srednia_harm();
    printf("Srednia harmoniczna tych liczb wynosi %.2lf\n", x);
}

double srednia_harm(void)
{
    double srednia_harm, a, b;
    printf("Podaj liczbe nr 1\n");
    scanf("%lf", &a);
    printf("Podaj liczbe nr 2\n");
    scanf("%lf", &b);
    srednia_harm = (1/(((1/a) + (1/b))/2));
    
    return srednia_harm;
}