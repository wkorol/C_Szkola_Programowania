//
//  test.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <string.h> //zawiera prototypy funkcji lancuchowych
void skroc(char *, unsigned int);
int main(void)
{
    char tekst[] = "Wyjasnienia powinny byc tak proste jak to mozliwe, ale nie prostsze. ";
    
    puts(tekst);
    skroc(tekst, 49);
    
    puts(tekst);
    puts("Spojrzmy na reszte lancucha. ");
    puts(tekst+51);
    
    return 0;
}

void skroc(char *lancuch, unsigned int rozmiar)
{
    if (strlen(lancuch) > rozmiar)
        *(lancuch+rozmiar) = '\0';
}