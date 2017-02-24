//swobin.c -- dostep swobodny, binarne we/wy


#include <stdio.h>
#include <stdlib.h>
#define DL_TAB 100
int main() {
    double liczby[DL_TAB];
    double wartosc;
    const char *plik = "liczby.dat";
    int i;
    long poz;
    
    FILE *plikwewy;
    //Tworzy zestaw wartosci typu double
    
    for(i=0; i < DL_TAB; i++)
        liczby[i] = 100.0 * i + 1.0 / (i+1);
    if((plikwewy = fopen(plik, "wb")) == NULL)
    {
        fprintf(stderr, "Blad otwarcia pliku %s do zapisu.\n", plik);
        exit(1);
    }
    
    //Zapisuje tablice do pliku w formacie binarnym
    
    fwrite(liczby, sizeof(double), DL_TAB, plikwewy);
    fclose(plikwewy);
    
    if ((plikwewy = fopen(plik, "rb")) == NULL) {
        fprintf(stderr , "Blad otwarcia pliku %s do dostepu swobodnego.\n", plik);
        exit(1);
    }
    
    //Odczytuje z pliku wybrane pozycje
    printf("Podaj indeks z przedzialu 0-%d.\n", DL_TAB - 1);
    scanf("%d", &i);
    while (i>=0 && i < DL_TAB ) {
        poz = (long) i * sizeof(double); //oblicza offset
        fseek(plikwewy, poz, SEEK_SET); //przechodzi w odpowiednie miejsce
        fread(&wartosc, sizeof(double), 1, plikwewy);
        printf("Wartosc pod tym indeksem to %f.\n", wartosc);
        printf("Kolejny indeks (wyjscie poza przedzial konczy program):\n");
        scanf("%d", &i);
    }
    fclose(plikwewy);
    puts("Na razie!");
    return 0;
}


