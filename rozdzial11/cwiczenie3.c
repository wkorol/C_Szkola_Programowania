//
//  cwiczenie3.c
//  
//
//  Created by Wiktor Korol on 03.11.2015.
//
//

#include <stdio.h>
#include <ctype.h>
#define ROZMIAR 100
void porzucanie(char *tab, char *tab2, int n);
int main()
{
    char tab[ROZMIAR];
    char tab2[ROZMIAR];
    
    porzucanie(tab, tab2, ROZMIAR);
    
    return 0;
}

void porzucanie(char *tab, char *tab2, int n)
{
    int i = 0,j;
    puts("Wprowadz wiersz");
    gets(tab);
    
    while(!isspace(*tab))
    {
        tab2[i] = *tab;
        tab++;
        i++;
    }
    
    for(j = 0; j<i; j++)
    {
        printf("%c", tab2[j]);
    }
    
    printf("\n");
}
