//
//  main.c
//  cwiczenie3
//
//  Created by Wiktor Korol on 23.11.2015.
//  Copyright © 2015 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define DLAN 50

int main(void) {
    FILE *we;
    FILE *wy;
    char ch;
    
    char plik_doc[DLAN];
    char plik_zro[DLAN];
    
    printf("Wprowadź nazwę pliku źródlowego\n");
    gets(plik_zro);
    printf("Wprowadź nazwę pliku docelowego\n");
    gets(plik_doc);
    if ((we = fopen(plik_zro, "r")) == NULL) {
        fprintf(stderr, "Błąd otwarcia pliku %s\n", plik_zro);
        exit(1);
    }
    
    if ((wy = fopen(plik_doc, "w")) == NULL) {
        fprintf(stderr, "Błąd otwarcia pliku %s\n", plik_doc);
        exit(2);
    }
    
    while ((ch = getc(we)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
            fputc(ch, wy);
        }
        else
            fputc(ch, wy);
        
    }
    
    fclose(we);
    fclose(wy);
    return 0;
}
