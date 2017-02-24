//dodajsl.c -- korzysta z fprintf(), fscanf(), rewind()

#include <stdio.h>
#include <stdlib.h>
#define MAX 40


int main() {
    FILE *wp;
    char slowa[MAX];
    if ((wp = fopen("slowka", "a+")) == NULL) {
        fprintf(stdin, "Nie moge otworzyc pliku \"slowka\".\n");
        exit(1);
    }
    
    puts("Podaj slowa, ktore maja zostac dodane do pliku;");
    puts("Aby zakonczyc, wcisnij Enter na poczatku wiersza.");
    while(gets(slowa) != NULL && slowa[0] != '\0')
        fprintf(wp, "%s ", slowa);
    puts("Zawartosc pliku:");
    rewind(wp); // przejdz do poczatku pliku
    
    while (fscanf(wp, "%s", slowa) == 1) {
        puts(slowa);
    }
    
    if(fclose(wp)!=0)
        fprintf(stderr, "Blad przy zamykaniu pliku.\n");
    return 0;
}
