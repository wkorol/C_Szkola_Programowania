// dopisz.c -- dopisuje pliki do pliku
//cwiczenie6 -- przerobic ten program zeby dzialal w oparciu o wiersz polecen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR_BUF 1024
#define DLAN 50
char temp[ROZMIAR_BUF];

void dopisz(FILE *zrodlo, FILE *cel);
int main(int argc, char *argv[]) {
    
    FILE *pd, *pz;
    int i;
    //int pliki = 0;
    //char plik_doc[DLAN];
    //char plik_zro[DLAN];
    //puts("Podaj nazwe pliku docelowego:");
    //gets(plik_doc);
    
    if(argc < 2)
    {
        printf("Sposob uzycia %s plik_doc plik1 plik2, etc.\n", argv[1]);
        exit(1);
    }
    
    if ((pd = fopen(argv[1], "a")) ==NULL )  {
        fprintf(stderr, "Błąd otwarcia %s\n", argv[1]);
        exit(2);
    }
    
    if (setvbuf(pd, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
        fputs("Nie mozna utworzyc bufora wyjsciowego\n", stderr);
        exit(3);
    }
    
    //puts("Podaj nazwe pierwszego pliku zrodlowego (pusty wiersz konczy program):");
    
    for(i=2; i<argc; i++)
    {
            if(strcmp(argv[i], argv[1]) == 0)
                fputs("Nie mozna dopisac pliku do siebie\n", stderr);
            else if((pz = fopen(argv[i], "r")) == NULL)
                fprintf(stderr, "Blad otwarcia pliku %s\n", argv[i]);
            else
            {
                if (setvbuf(pz, NULL, _IOFBF, ROZMIAR_BUF) != 0) {
                    fputs("Nie mozna utworzyc bufora wejsciowego\n", stderr);
                }
                
                dopisz(pz, pd);
                if(ferror(pz) != 0)
                    fprintf(stderr, "Blad odczytu pliku %s\n", argv[i]);
                if(ferror(pd) != 0)
                    fprintf(stderr, "Blad zapisu pliku %s\n", argv[1]);
                fclose(pz);
                printf("Plik %s dopisany.\n", argv[i]);
                puts("Kolejny plik (pusty wiersz konczy program):");
            }
        
    }
    
    printf("Koniec. Dopisano %d plikow.\n", argc-2);
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
