//klej.c -- uzycie operatora ##
#include <stdio.h>
#define XNAZWA(n) x##n
#define WYPISZ_XN(n) printf("x" #n " = %d\n", x##n);
int main(void)
{
    int XNAZWA(1) = 14; //rozwijanie do int x1 = 14;
    int XNAZWA(2) = 20; //rozwijanie do int x2 = 20;
    WYPISZ_XN(1); //rozwijanie do printf("x1 = %d\n, x1);
    WYPISZ_XN(2); //rozwijanie do printf("x1 = %d\n, x2);
    return 0;
}