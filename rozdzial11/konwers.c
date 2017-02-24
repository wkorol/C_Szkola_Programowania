//
//  konwers.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define GRANICA 80
void DuzeLit(char *);
int LiczInter(const char *);
int main(void)
{
    char wiersz[GRANICA];
    
    puts("Podaj wiersz tekstu:");
    gets(wiersz);
    DuzeLit(wiersz);
    puts(wiersz);
    printf("Wpisany wiersz zaiwera %d znakow interpunkcyjnych.\n", LiczInter(wiersz));
    return 0;
}

void DuzeLit(char * lan)
{
    while(*lan!='\0')
    {
        *lan = toupper(*lan);
        lan++;
    }
}

int LiczInter(const char * lan)
{
    int licz = 0;
    while(*lan!= '\0')
    {
        if(ispunct(*lan))
            licz++;
        lan++;
    }
    return licz;
}