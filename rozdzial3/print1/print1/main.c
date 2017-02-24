//print1.c -- przedstawia niektore wlasciwosci funkcji printf()
#include <stdio.h>
int main(void)
{
    int dziesiec = 10;
    printf("Wlasciwy sposob: ");
    printf("%d minus %d rowna sie %d\n", dziesiec, 2, dziesiec - 2);
    printf("Bledny sposob: ");
    printf("%d minus %d rowna sie %d\n", dziesiec ); // brakuje 2 argumentow
    return 0;
}