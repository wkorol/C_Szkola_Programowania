#include <stdio.h>
#include "funkcje.h"

int main()
{
    double x,y;
    double r;
    double alfa;
    puts("Wprowadź długość wektora");
    scanf("%lf", &r);
    
    puts("Wprowadź kąt wektora");
    scanf("%lf", &alfa);
    alfa = ST_NA_RAD * alfa;
    x = r * cos(alfa);
    y = r * sin(alfa);
    
    printf("x = %lf\n", x);
    printf("y = %lf\n", y);
    
}