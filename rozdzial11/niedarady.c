//
//  niedarady.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#define ODPOWIEDZ "Grant"
int main(void)
{
    char proba[40];
    puts("Kto jest pochowany w grobowcu Granta?");
    gets(proba);
    while(proba!=ODPOWIEDZ)
    {
        puts("Niestety to nie jest dobra odpowiedz. Sprobuj jeszcze raz.");
        gets(proba);
    }
    puts("Tak jest!");
}