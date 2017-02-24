//cwiczenie8

//./a.out znak 0 lub wiecej nazw plikow
//jesli nie ma wiecej argumentow to standardowe wejscie

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    int i;
    int licznik = 0;
    char ch;
    FILE *we;
    if (argc < 2) {
        printf("Sposob uzycia: %s znak nazwy_plikow\n", argv[0]);
        exit(1);
    }
    
    if (argc == 2) {
        
        char nazwa[40];
        
        while(gets(nazwa) && nazwa[0] != '\0')
        {
            if ((we = fopen(nazwa, "r")) == NULL) {
                fprintf(stderr, "Błąd otwarcia pliku %s, wczytaj nowy plik\n", nazwa);
            }
            else
            {
                while ((ch = getc(we)) != EOF) {
                    if(ch == *argv[1])
                        licznik++;
                }
            }
            
            printf("W pliku %s, znak %s wystapil %d razy\n", nazwa, argv[1], licznik);
            printf("Wprowadz kolejna nazwe pliku, aby zakonczyc wprowadz pusty wiersz\n");
            licznik = 0;
        }
        
        
    }
    else
    {
        for(i=2; i<argc; i++)
        {
            if ((we = fopen(argv[i], "r")) == NULL) {
                fprintf(stderr, "Błąd otwarcia pliku %s\n", argv[i]);
                if(argc > 2)
                    printf("Przechodzimy do nastepnego pliku %s\n", argv[i+1]);
                if(argc == 2)
                    exit(1);
            }
            else
            {
                while ((ch = getc(we)) != EOF) {
                    if(ch == *argv[1])
                        licznik++;
                }
                printf("W pliku %s, znak %s wystapil %d razy\n", argv[i], argv[1], licznik);
                licznik = 0;
            }
            
            
            }
                
            
        }
    
    
    return 0;
}
