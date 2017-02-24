//
//  cwiczenie7.c
//  
//
//  Created by Wiktor Korol on 07.11.2015.
//
//

#include <stdio.h>
#include <string.h>
char *zawiera_lan(char *lancuch1, char *lancuch2);
int main()
{
    char *x;
    char lancuch1[100];
    char lancuch2[100];
    puts("Wprowadź 1 lancuch");
    gets(lancuch1);
    puts("Wprowadź 2 lancuch");
    gets(lancuch2);
    
    
    x = zawiera_lan(lancuch1, lancuch2);
    if(x!=NULL)
        printf("Lancuch 2 zawiera sie w Lancuchu 1: %c, %p\n", *x, x);
    else
        printf("Lancuch 2 nie zawiera sie w Lancuchu 1\n");
}

char *zawiera_lan(char *lancuch1, char *lancuch2)
{
    char *litera;
    if((strcmp(lancuch1, lancuch2)) >= 0)
    {
        while(*lancuch1 != '\0')
        {
            if(*lancuch1 == *lancuch2)
            {
                litera = lancuch1;
            }
            lancuch1++;
        }
        
    }
    else
        litera = NULL;
    return litera;
    
}