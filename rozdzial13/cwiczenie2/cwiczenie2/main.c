//
//  main.c
//  cwiczenie2
//
//  Created by Wiktor Korol on 23.11.2015.
//  Copyright © 2015 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int i, ch;
    FILE *we;
    
    if(argc < 2)
        printf("Sposob uzycia: %s nazwa_pliku\n", argv[0]);
    else
    {
    
        for(i = 1; i<argc; i++)
        {
           if((we = fopen(argv[i], "r")) == NULL)
           {
               fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", argv[i]);
               exit(1);
           }
            
            printf("Wyswietlam zawartosc pliku %s\n", argv[i]);
            while((ch = getc(we)) != EOF)
                putc(ch, stdout);
            
            
            fclose(we);
            
        }
        
    }
    return 0;
}
