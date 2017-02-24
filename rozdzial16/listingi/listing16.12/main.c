//predef.c -- identyfikatory przedefiniowane
#include <stdio.h>
#include <stdlib.h>
void czemu_ja();
int main()
{
    printf("Plik: %s\n", __FILE__);
    printf("Data: %s\n", __DATE__);
    printf("Czas: %s\n", __TIME__);
    printf("Wersja %ld\n", __STDC_VERSION__);
    printf("Wiersz nr: %d.\n", __LINE__);
    printf("Nazwa funkcji %s\n", __func__);
    czemu_ja();
    return 0;
}

void czemu_ja() {
    printf("Nazwa funkcji: %s\n", __func__);
    printf("Wiersz nr: %d\n", __LINE__);
}