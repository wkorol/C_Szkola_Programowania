//cwiczenie2

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    FILE *we;
    int i;
    int ch;
    
    if (argc == 1) {
        fprintf(stderr, "Wprowadziles 0 plikow.\n");
        exit(1);
    }
    
    for (i=1; i<argc; i++) {
        if((we = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Blad w otwarciu pliku %s\n", argv[i]);
        }
        else
        {
            printf("Wyświetlam plik %s\n", argv[i]);
            while ((ch = getc(we)) != EOF) {
                fputc(ch, stdout);
            }
            printf("Zamykam plik %s\n", argv[i]);
            fclose(we);
        }
    }
    
    if(argc != 1)
    printf("Koniec, wyswietlono wszystkie pliki :)\n");
    
    return 0;
}
