//typy.c -- wyswietla rozmiary typow
#include <stdio.h>
int main(void)
{
    printf("Typ int ma rozmiar %ld bajtow.\n", sizeof(int));
    printf("Typ char ma rozmiar %ld bajtow.\n", sizeof(char));
    printf("Typ long ma rozmiar %ld bajtow.\n", sizeof(long));
    printf("Typ double ma rozmiar %ld bajtow.\n", sizeof(double));
    
    return 0;
           
}