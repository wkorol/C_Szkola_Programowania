//sprawdz.c -- wykorzystuje assert()
#include <stdio.h>
#include <math.h>
#include <assert.h>
int main()
{
    double x,y,z;
    puts("Podaj pare liczb(0 0 konczy program): ");
    while (scanf("%lf%lf", &x, &y) == 2 && (x!=0 || y!=0)) {
        z = x*x - y*y; //powinno byc +
        assert(z>=0);
        printf("wynik wynosi %f\n", sqrt(z));
        puts("Kolejna para liczb: ");
    }
}