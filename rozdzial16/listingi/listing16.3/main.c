//podst.c -- zastepowanie wewnatrz lancucha
#include <stdio.h>
#define PKW(x) printf("Kwadratem liczby " #x " jest %d\n", ((x)*(x)))
int main(void)
{
    int y = 5;
    PKW(y);
    PKW(2+4);
    
    
    return 0;
}