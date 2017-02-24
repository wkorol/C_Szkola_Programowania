//
//  wyniki.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define ROZMIAR 10
#define PAR 72
int main(void)
{
    int index, wynik[ROZMIAR];
    int suma = 0;
    float srednia;
    
    printf("Podaj %d wynikow gry w golfa:\n", ROZMIAR);
    for (index = 0; index < ROZMIAR; index++)
        scanf("%d", &wynik[index]); //wczytanie dziesieciu wynikow
    printf("Odczytane wyniki to:\n");
    for(index =0; index<ROZMIAR; index++)
        printf("%5d", wynik[index]);
    printf("\n");
    for(index = 0; index < ROZMIAR; index++)
        suma+=wynik[index]; //i ich zsumowanie
    srednia = (float) suma/ROZMIAR; //dobrze znana metoda liczenia sredniej
    printf("Suma wynikow = %d, srednia = %.2f\n", suma, srednia);
    printf("Oznacza to handicap w wysokosci %.0f.\n", srednia - PAR);
    return 0;
}