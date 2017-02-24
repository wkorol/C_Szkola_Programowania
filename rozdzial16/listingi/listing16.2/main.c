//mak_arg.c -- makra z argumentami
#include <stdio.h>
#define KWADR(X) ((X)*(X))
#define PR(X) printf("Wynik wynosi %d.\n", X)

int main(void)
{
    int x = 4;
    int z;
    z = KWADR(x);
    PR(z);
    z = KWADR(2);
    PR(z);
    PR(KWADR(x+2));
    PR(100/KWADR(2));
    printf("x wynosi %d.\n", x);
    PR(KWADR(++x));
    printf("Po zwiekszeniu x wynosi %x.\n", x);
    
    return 0;
}