//
//  main.c
//  cwiczenie1
//
//  Created by Wiktor Korol on 23.11.2015.
//  Copyright © 2015 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    FILE *we;
    FILE *wy;
    
    if (argc != 3) {
        printf("Sposób użycia: %s nazwa_zr nazwa_doc\n", argv[0]);
    }
    else
    {
    
        if ((we = fopen(argv[1], "rb")) == NULL) {
            fprintf(stderr, "Blad otwarcia %s\n", argv[1]);
            exit(1);
        }
        
        if ((wy = fopen(argv[2], "wb")) == NULL) {
            fprintf(stderr, "Blad otwarcia %s\n", argv[2]);
            exit(2);
        }

        size_t n;
        char bufor[1000];
        
        
        while((n = fread(bufor, sizeof (char) , 1000 , we)) > 0)
            fwrite(bufor, sizeof(char), n, wy);
        
        if(fclose(we) == 0 && fclose(wy) == 0)
            printf("Oba pliki zamknięto poprawnie\n");
        
        
    }
    
    return 0;
}
