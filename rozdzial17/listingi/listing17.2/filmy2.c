//filmy2.c -- korzystanie z listy laczonej struktur
#include <stdio.h>
#include <stdlib.h> //zawiera prototyp malloc
#include <string.h> //zawiera prototyp strcpy
#define ROZT 45
struct film {
    char tytul[ROZT];
    int ocena;
    struct film * nast; //wskazuje na nastepna strukture w liscie
};
int main(void) {
    struct film * glowny = NULL;
    struct film * poprz, *biezacy;
    char wejscie[ROZT];
    puts("Podaj pierwszy tytul filmu:");
    while (gets(wejscie) != NULL && wejscie[0] != '\0') {
        biezacy = (struct film *) malloc(sizeof(struct film));
        if(glowny == NULL)
            glowny = biezacy;
        else
            poprz->nast = biezacy;
        biezacy->nast = NULL;
        strcpy(biezacy->tytul, wejscie);
        puts("Podaj Twoja ocene <0-10>:");
        scanf("%d", &biezacy->ocena);
        while(getchar()!='\n')
            continue;
        puts("Podaj nastepny tytul filmu (pusty wiersz konczy program):");
        poprz = biezacy;
    }
    if(glowny == NULL)
        printf("Nie wpisano zadnych danych.");
    else
        printf("Oto lista filmow:\n");
    biezacy = glowny;
    while(biezacy != NULL) {
        printf("Film: %s Ocena: %d\n", biezacy->tytul, biezacy->ocena);
        biezacy = biezacy->nast;
    }
    printf("Do widzenia!\n");
    return 0;
}