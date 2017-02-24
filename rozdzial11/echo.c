//
//  echo.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
int main(int argc, char *argv[])
{
    int licznik;
    
    printf("Wiersz polecen zawiera %d argumentow:\n", argc-1);
    for(licznik = 1; licznik<argc; licznik++)
        printf("%d: %s\n", licznik, argv[licznik]);
    
    printf("\n");
    return 0;
}