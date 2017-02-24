//daneos.c -- definiowanie funkcji
#include <stdio.h>
#include "daneos.h"
//definiowanie funkcji
void wprowadz(daneos * wskn)
{
    int i;
    
    printf("Prosze podac imie: ");
    fgets(wskn->imie, DL_LAN, stdin);
    i = 0;
    while (wskn->imie[i] != '\n' && wskn->imie[i] != '\0') {
        i++;
    }
    
    if (wskn->imie[i] == '\n') {
        wskn->imie[i] = '\0';
    }
    else
        while (getchar() != '\n') {
            continue;
        }
    printf("Proszę podac nazwisko: ");
    fgets(wskn->nazw, DL_LAN, stdin);
    i = 0;
    while (wskn->nazw[i] != '\n' && wskn->nazw[i] != '\0') {
        i++;
    }
    if (wskn->nazw[i] == '\n') {
        wskn->nazw[i] = '\0';
    }
    else
        while(getchar() != '\n')
            continue;
}
void wyswietl (const daneos * wskn)
{
    printf("%s %s", wskn->imie, wskn->nazw);
}

