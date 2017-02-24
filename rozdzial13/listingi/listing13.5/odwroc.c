//odwroc.c -- wyswietla zawartosc pliku w odwrotnej kolejnosci

#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032' //Znacznik EOF w plikach tekstowych DOS
#define DLAN 50
int main(void) {
    char plik[DLAN];
    char ch;
    FILE *wp;
    long licznik, koniec;
    puts("Podaj nazwe pliku:");
    gets(plik);
    //Tryb binarny tylko do odczytu
    if ((wp = fopen(plik, "rb"))== NULL) {
        printf("Nie moge otworzyc %s\n", plik);
        exit(1);
    }
    fseek(wp, 0L, SEEK_END); //Przejdz do konca pliku
    koniec = ftell(wp);
    
    for (licznik = 1L; licznik <= koniec; licznik++) {
        fseek(wp, -licznik, SEEK_END); //idz do tylu
        ch = getc(wp);
       /* //Dla DOSu - dziala w Uniksie
        if(ch!=CNTL_Z && ch != '\r')
            putchar(ch); */
        //Dla MACa
        if(ch == '\r')
            putchar('\n');
        else
            putchar(ch);
    }
    
    putchar('\n');
    fclose(wp);
    
    
    return 0;
}
