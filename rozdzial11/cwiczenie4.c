//
//  cwiczenie4.c
//  
//
//  Created by Wiktor Korol on 03.11.2015.
//
//

#include <stdio.h>
#define ROZMIAR 100
void zwracanie(char *a, char *b, int i);
int main()
{
    char tab[ROZMIAR], litera;
    int i = 1;
    
    printf("Wprowadź łańcuch: \n");
    char *wsk = gets(tab);
    printf("Jakiej litery szukasz w tym łańcuchu? \n");
    scanf("%c", &litera);
    while(*wsk != '\0')
    {
        zwracanie(wsk, &litera, i);
        wsk++;
        i++;
    }
    return 0;
}

void zwracanie(char *a, char *b, int i )
{
    
        if(*a == *b)
        {
            printf("Znaleziono na pozycji %d\n", i);
        }
    
    
    
        //printf("%c %d", *a, i);
    
}
