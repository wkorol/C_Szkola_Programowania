//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 22.09.2015.
//
//

#include <stdio.h>

double min(double x, double y);

int main()
{
    double x,y;
    printf("Wprowadz dwie wartosci\n");
    scanf("%lf %lf", &x, &y);
    printf("Wprowadziles %.2lf i %.2lf, mniejsza jest %.2lf\n", x, y, min(x,y));
    
    
    return 0;
}

double min(double x, double y)
{
    double min;
    if(x<y)
        min = x;
    else
        min = y;

    return min;
}