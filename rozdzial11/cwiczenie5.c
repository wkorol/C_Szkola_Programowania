//
//  cwiczenie5.c
//  
//
//  Created by Wiktor Korol on 06.11.2015.
//
//

#include <stdio.h>
int znajduje_sie_w(char*lancuch, char*znak);
int main()
{
    int zwrot;
    char znak;
    char lancuch[100];
    printf("Wprowadź łańcuch: \n");
    gets(lancuch);
    printf("Jaka litere chcesz znalezc w tym lancuchu? \n");
    scanf("%c", &znak);
    
    printf("%d\n", znajduje_sie_w(lancuch, &znak));
    
    
    
    
    
    return 0;
}


int znajduje_sie_w(char *lancuch, char *znak)
{
    int licz = 0;
    while(*lancuch != '\0')
    {
        if(*lancuch == *znak)
        {
            licz++;
        }
        
        lancuch++;
    }
    
    if(licz != 0)
        return 1;
    else
        return 0;
    
}