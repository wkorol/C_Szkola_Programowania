//Cwiczenie 1

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    FILE *source;
    FILE *out;
    int ch;
    
    if (argc < 2) {
        fprintf(stderr, "Sposob uzycia: %s nazwa_pliku1 nazwa_pliku2\n", argv[0]);
        exit(1);
    }
    
    if ((source = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Blad w otwarciu pliku %s\n", argv[1]);
        exit(1);
    }
    
    if ((out = fopen(argv[2], "w")) == NULL) {
        fprintf(stderr, "Blad w otwarciu pliku %s\n", argv[2]);
        exit(1);
    }
    
    while ((ch = getc(source)) != EOF) {
        putc(ch, out);
    }
    
    printf("Skopiowano zawartosc pliku %s do pliku %s\n", argv[1], argv[2]);
    fclose(source);
    fclose(out);
    
    return 0;
}
