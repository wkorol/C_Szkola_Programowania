//
//  str_cat.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//


//laczy dwa lancuchy
#include <stdio.h>
#include <string.h> //deklaruje funkcje strcat()
#define ROZMIAR 80
int main(void)
{
    char kwiat[ROZMIAR];
    char dodatek[] = " smierdza jak stare buty.";
    puts("Jakie kwiaty lubisz najbardziej?");
    gets(kwiat);
    strcat(kwiat, dodatek);
    puts(kwiat);
    puts(dodatek);
    return 0;
}
