//
//  main.c
//  cwiczenie7
//
//  Created by Wiktor Korol on 23.11.2015.
//  Copyright © 2015 Wiktor Korol. All rights reserved.
//

//Otwiera dwa pliki o nazwach podanych w wierszu polecen

// a) 1. wiersz 1 pliku, 1. wiersz drugiego pliku, 2. wiersz 1 pliku, 2. wiersz drugiego pliku
// b) wiersze o tym samym numerze byly wyswietlane w tym samym wierszu

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    
    char ch1, ch2;
    if (argc < 3) {
        printf("Sposób użycia: %s plik1 plik2\n", argv[0]);
    }
    else
    {
        FILE *plik1;
        FILE *plik2;
        
        if ((plik1 = fopen(argv[1], "r")) == NULL)
        {
            fprintf(stderr, "Błąd odczytu pliku %s", argv[1]);
            exit(1);
        }
        
        
        if ((plik2 = fopen(argv[2], "r")) == NULL)
        {
            fprintf(stderr, "Błąd odczytu pliku %s", argv[2]);
            exit(2);
        }
        
        
        ch1 = getc(plik1);
        ch2 = getc(plik2);
        while (ch1 != EOF || ch2 != EOF) {
            while (ch1 != EOF && ch1 != '\n') { /* skipped after EOF reached */
                putchar(ch1);
                ch1 = getc(plik1); }
                   if (ch1 != EOF) {
                       putchar(',');
                       putchar(' ');
                       ch1 = getc(plik1); }
                   while (ch2 != EOF && ch2 != '\n') { /* skipped after EOF reached */
                putchar(ch2);
                ch2 = getc(plik2); }
                          if (ch2 != EOF) {
                              putchar('\n');
                              ch2 = getc(plik2); }
                          }
                if (fclose(plik1) != 0)
                    printf("Could not close file %s\n", argv[1]);
            if (fclose(plik2) != 0)
                printf("Could not close file %s\n", argv[2]);
    
    
    
 }
    return 0;
}
