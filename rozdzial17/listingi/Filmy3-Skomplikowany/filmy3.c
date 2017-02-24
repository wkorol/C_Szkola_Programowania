//filmy3.c -- korzystanie z listy laczonej zgodnie z ATD
#include <stdio.h>
#include <stdlib.h> //prototyp funkcji exit()
#include "lista.h" //definiuje typy Lista, Pozycja
void pokazfilm(Pozycja pozycja);
int main(void) {
    Lista filmy;
    Pozycja tymcz;
    InicjujListe(&filmy);
    if (PelnaLista(&filmy)) {
        fprintf(stderr, "Brak pamieci! Do widzenia!\n");
        exit(1);
    }
    puts("Podaj pierwszy tytul filmu:");
    while (gets(tymcz.tytul) != NULL && tymcz.tytul[0] != '\0') {
        puts("Podaj Twoja ocene <0-10>:");
        scanf("%d", &tymcz.ocena);
        while(getchar()!='\n')
            continue;
        if (DodajPozycje(tymcz, &filmy) == false) {
            fprintf(stderr, "Blad alokacji pamieci\n");
            break;
        }
        if (PelnaLista(&filmy)) {
            puts("Lista jest juz pelna.");
            break;
        }
        puts("Podaj nastepny tytul filmu (pusty wiersz konczy wpisywanie):");
    }
    if(PustaLista(&filmy))
        printf("Nie wpisano zadnych danych.");
    else {
        printf("Oto lista filmow:\n");
        Przejdz(&filmy, pokazfilm);
    }
    printf("Do widzenia!\n");
    return 0;
}

void pokazfilm(Pozycja pozycja) {
    printf("Film: %s Ocena: %d\n", pozycja.tytul, pozycja.ocena);
}