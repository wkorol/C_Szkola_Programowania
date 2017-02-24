//
//  cwiczenie2.c
//
//
//  Created by Wiktor Korol on 03.11.2015.
//
//

#include <stdio.h>
#include <ctype.h>
#define ROZMIAR 10
void pobieranie(char *tab, int n);
int main()
{
    char tab[ROZMIAR];
    pobieranie(tab, ROZMIAR);
    
    
    
    return 0;
}

void pobieranie(char *tab, int n)
{
    int i = 0, j;
    char znak;
    while((znak = getchar()) && !isspace(znak) && i < n)
    {
        tab[i] = znak;
        i++;
    }
    
    for(j=0; j<i; j++)
    {
        printf("%c ", tab[j]);
    }
    
}