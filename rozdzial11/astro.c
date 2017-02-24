//
//  astro.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <string.h>
#define ROZMIARLISTY 5
int main()
{
    char * lista[ROZMIARLISTY] = { "astronomia", "asteroida", "astrofizyka", "ostroga", "asteryzm"};
    
    int licznik = 0;
    int i;
    for(i = 0; i<ROZMIARLISTY; i++)
    {
        if(strncmp(lista[i], "astro", 5)== 0)
        {
            printf("Znaleziono: %s\n", lista[i]);
            licznik++;
        }
    }
    
    printf("Lista zawiera %d slowa zaczynajace sie na astro.\n", licznik);
    return 0;
}
