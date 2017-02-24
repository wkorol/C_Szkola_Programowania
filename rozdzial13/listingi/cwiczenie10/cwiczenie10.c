//cwiczenie 10

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    char nazwa[40];
    FILE *we;
    long poz;
    char ch;
    int pozycja;
    
    printf("Podaj nazwę pliku\n");
    gets(nazwa);
    
    if((we = fopen(nazwa, "r")) == NULL)
    {
        fprintf(stderr, "Błąd w odczycie pliku\n");
        exit(1);
    }
    
    
        scanf("%d", &pozycja);
        while(pozycja > 0 && pozycja < 100)
        {
            while((ch = getc(we)) != EOF || ch != '\n')
            {
                poz = (long) pozycja * sizeof(char); //oblicza offset
                fseek(we, poz, SEEK_SET); //przechodzi w odpowiednie miejsce
                fread(&ch, sizeof(char), 1, we);
                fputc(ch, stdout);
            }
            scanf("%d", &pozycja);
        }
    

    
    
    
    
    
    
    return 0;
}
