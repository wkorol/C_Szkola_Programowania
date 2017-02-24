//ifdef.c -- wykorzystuje kompilacje warunkowa
#include <stdio.h>
#define TYLKO_SPRAWDZAM
#define GRANICA 4
int main(void)
{
    int i;
    int suma = 0;
    for (i = 1; i <= GRANICA; i++) {
        suma+= 2*i*i + 1;
#ifdef TYLKO_SPRAWDZAM
        printf("i=%d, suma = %d\n", i, suma);
#endif
    }
    printf("Suma koncowa = %d\n", suma);
    
    return 0;
}