//
//  kopia2.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <string.h>
#define SLOWO "cukier"
#define ROZMIAR 40
int main(void)
{
    char *zrodlo = SLOWO;
    char kopia[ROZMIAR] = "Podaj mnie do sadu.";
    char * wl;
    puts(zrodlo);
    puts(kopia);
    wl = strcpy(kopia+6, zrodlo);
    puts(kopia);
    puts(wl);
    return 0;
}