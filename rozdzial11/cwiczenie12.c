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
    char *tab[100];
    
    
    for(licznik = 1; licznik<argc; licznik++)
        tab[licznik] = argv[licznik];
    for(licznik = argc-1; licznik > 0; licznik--)
        printf("%s ", tab[licznik]);
    
    printf("\n");
    return 0;
}