//dodajsl.c -- korzysta z fprintf(), fscanf(), rewind()

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 40

int main() {
    FILE *wp;
    int i = 1;
    char ch;
    

    
    char slowa[MAX];
    if ((wp = fopen("slowka", "a+b")) == NULL) {
        fprintf(stdin, "Nie moge otworzyc pliku \"slowka\".\n");
        exit(1);
    }
    
    rewind(wp);
    
    while((ch = fgetc(wp)) != EOF)
    {
        if(ch == ' ')
            i++;
    }
    
    
    puts("Podaj slowa, ktore maja zostac dodane do pliku;");
    puts("Aby zakonczyc, wcisnij Enter na poczatku wiersza.");
    while(gets(slowa) != NULL && slowa[0] != '\0')
    {
        fprintf(wp, "%d.%s ",i, slowa);
        i++;
    }
    puts("Zawartosc pliku:");
    rewind(wp); // przejdz do poczatku pliku
    
    while (fscanf(wp, "%s", slowa) == 1) {
        puts(slowa);
    }
    
    if(fclose(wp)!=0)
        fprintf(stderr, "Blad przy zamykaniu pliku.\n");
    return 0;
}

//poz = (long) i * sizeof(double); //oblicza offset
//fseek(plikwewy, poz, SEEK_SET); //przechodzi w odpowiednie miejsce
//fread(&wartosc, sizeof(double), 1, plikwewy);
