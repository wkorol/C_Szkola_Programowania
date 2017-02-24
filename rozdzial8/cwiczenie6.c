//
//  cwiczenie6.c
//  
//
//  Created by Wiktor Korol on 09.09.2015.
//
//

#include <stdio.h>
#include <ctype.h>
#define X "Nie podales zadnego znaku drukowanego"
void pobierz_pierwszy(void);
int main()
{
    char ch;
    
    pobierz_pierwszy();
    
    
    
}

void pobierz_pierwszy(void)
{
    char ch;
    int wyjsciowy;
    char tab[100];
    int i=0;
    int j=0;
    while((ch = getchar()) != '\n')
    {
            tab[i] = ch;
            i++;
    }
    
    for(j=0; j<100; j++)
    {
        if(isprint(tab[j]) && tab[j] != ' ')
        {
            printf("%c", tab[j]);
            break;
        }
        else
            continue;
    }

}


