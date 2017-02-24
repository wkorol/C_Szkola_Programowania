//cwiczenie3

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    FILE *source;
    FILE *out;
    char source_n[10];
    char out_n[10];
    char ch;
    char ch2;
    
    printf("Wprowadź nazwe pliku zrodlowego:\n");
    gets(source_n);
    puts("Wprowadź nazwę pliku docelowego:");
    gets(out_n);
    
    if((source = fopen(source_n, "r")) == NULL)
    {
        fprintf(stderr, "Błąd w otwarciu pliku\n");
        exit(1);
    }
    
    
    out = fopen(out_n, "w");
    
    while ((ch = getc(source)) != EOF)
    {
        if(islower(ch))
        {
            ch = toupper(ch);
            fputc(ch, out);
        }
        else
            fputc(ch, out);
    }
    
    fclose(out);
    
    out = fopen(out_n, "r");
    
    //Wyswietlenie
    while ((ch2 = getc(out)) != EOF) {
        fputc(ch2, stdout);
    }
    
    
    fclose(source);
    fclose(out);
    
    printf("\nKoniec\n");
    
    return 0;
}
