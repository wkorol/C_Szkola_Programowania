#include "funkcje.h"
#include <stdio.h>
#include <time.h>
clock_t clock(void);

void funkcja(double);
int main()
{
    double czas;
    printf("Podaj czas:\n");
    scanf("%lf", &czas);
    
    funkcja(czas);
    
    return 0;
}


void funkcja(double czas) {
    int i =0;
    
    double x = (double)clock();
    double y = (double)clock();
    
    while((y-x)/CLOCKS_PER_SEC < czas)
    {
        i++;
        y = (double)clock();
        
    }
    printf("%f\n", y/CLOCKS_PER_SEC);
    printf("%d\n", i);
    
    
    
    
}