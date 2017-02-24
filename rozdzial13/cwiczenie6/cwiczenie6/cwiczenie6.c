//
//
//  cwiczenie6
//
//  Created by Wiktor Korol on 23.11.2015.
//
//


//zmniejsza rozmiar Twoich plików o dwie trzecie
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //dla strcpy(), strcat()

int main(int argc, char *argv[])
{
    FILE *we, *wy; //deklaracja 2 wskaznikow plikowych
    int ch;
    char zrodlo[40];
    char nazwa[40]; //miejsce na nazwy pliku wyjsciowego
    int licznik = 0;
    printf("Wprowadź nazwę pliku źrodłowego: \n");
    gets(zrodlo);
    
    if ((we = fopen(zrodlo, "r")) == NULL) {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", zrodlo);
        exit(2);
    }
    
    strcpy(nazwa, zrodlo); //Kopiuje nazwe pliku do tablicy
    strcat(nazwa, ".red"); //dodaje .red do nazwy
    if ((wy = fopen(nazwa, "w")) == NULL) {
        //Otwiera plik do zapisu
        fprintf(stderr, "Nie mozna utworzyc pliku wyjsciowego.\n");
        exit(3);
    }
    
    while ((ch = getc(we)) != EOF)
        if(licznik++ % 3 == 0)
            putc(ch,wy); //wyswietla co trzeci znak
    if(fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");
    
    
    return 0;
}
