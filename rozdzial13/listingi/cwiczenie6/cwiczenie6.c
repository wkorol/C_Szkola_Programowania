//reduktor.c -- zmniejsza rozmiar Twoich plikow o dwie trzecie!
//cwiczenie6 -- przerobic tak zeby korzystal w sposob interaktywny

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //dla strcpy(), strcat()

int main() {
    FILE *we, *wy; //deklaracja 2 wskaznikow plikowych
    int ch;
    char nazwa_zr[40];
    char nazwa[40]; //miejsce na nazwy pliku wyjsciowego
    int licznik = 0;
    
    puts("Podaj nazwę pliku źródłowego");
    gets(nazwa_zr);
    
    if((we= fopen(nazwa_zr, "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", nazwa_zr);
        exit(2);
    }
    
    strcpy(nazwa, nazwa_zr); //kopiuje nazwe pliku do tablicy
    strcat(nazwa, ".red"); //dodaje .red do nazwy
    
    if((wy = fopen(nazwa, "w")) == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc pliku wyjsciowego.\n");
        exit(3);
    }
    
    while((ch = getc(we ))!= EOF)
        if(licznik++%3 == 0)
            putc(ch,wy); // wyswietla co trzeci znak
    if(fclose(we) != 0 || fclose(wy)!= 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");
    
    
    return 0;
}
