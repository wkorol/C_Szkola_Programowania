//
//  lacz_spr.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <string.h>
#define ROZMIAR 30
#define ROZMIAR_OWADY 17
int main(void)
{
    char kwiaty[ROZMIAR];
    char dodatek[] = " smierdza jak stare buty.";
    char owady[ROZMIAR_OWADY];
    int wolne;
    puts("Jakie kwiaty lubisz najbardziej?");
    gets(kwiaty);
    if((strlen(dodatek) + strlen(kwiaty) + 1) <= ROZMIAR)
        strcat(kwiaty, dodatek);
    puts(kwiaty);
    puts("Jakie owady lubisz najbardziej?");
    gets(owady);
    wolne = ROZMIAR_OWADY - strlen(owady) - 1;
    strncat(owady,dodatek,wolne);
    puts(owady);
    return 0;
}