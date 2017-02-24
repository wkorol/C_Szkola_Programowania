// dopisz.c -- dopisuje pliki do pliku

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR_BUF 1024
#define DLAN 50
char temp[ROZMIAR_BUF];

void dopisz(FILE *zrodlo, FILE *cel);
int main() {
    
    FILE *pd, *pz;
    int pliki = 0;
    char plik_doc[DLAN];
    char plik_zro[DLAN];
    puts("Podaj nazwe pliku docelowego:");
    gets(plik_doc);
    
    if ((pd = fopen(plik_doc, "a")) ==NULL )  {
        fprintf(stderr, "Błąd otwarcia %s\n", plik_doc);
        exit(2);
    }

    if (setvbuf(pd, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
        fputs("Nie mozna utworzyc bufora wyjsciowego\n", stderr);
        exit(3);
    }
    
    puts("Podaj nazzwe pierwszego pliku zrodlowego (pusty wiersz konczy program):");
    
    while (gets(plik_zro) && plik_zro[0] != '\0') {
        if(strcmp(plik_zro, plik_doc) == 0)
            fputs("Nie mozna dopisac pliku do siebie\n", stderr);
        else if((pz = fopen(plik_zro, "r")) == NULL)
            fprintf(stderr, "Blad otwarcia pliku %s\n", plik_zro);
        else
        {
            if (setvbuf(pz, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
                fputs("Nie mozna utworzyc bufora wejsciowego\n", stderr);
            }
            
            dopisz(pz, pd);
            if(ferror(pz) != 0)
                fprintf(stderr, "Blad odczytu pliku %s\n", plik_zro);
            if(ferror(pd) != 0)
                fprintf(stderr, "Blad zapisu pliku %s\n", plik_doc);
            fclose(pz);
            pliki++;
            printf("Plik %s dopisany.\n", plik_zro);
            puts("Kolejny plik (pusty wiersz konczy program):");
        }
    }
    
    printf("Koniec. Dopisano %d plikow.\n", pliki);
    fclose(pd);
    
    return 0;
}

void dopisz(FILE *zrodlo, FILE *cel)
{
    size_t bajty;
    extern char temp[]; //korzysta z tablicy zewnetrznej temp
    while((bajty = fread(temp, sizeof(char), ROZMIAR_BUF, zrodlo)) > 0)
        fwrite(temp, sizeof(char), bajty, cel);
}
