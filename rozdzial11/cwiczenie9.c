//
//  cwiczenie9.c
//  
//
//  Created by Wiktor Korol on 08.11.2015.
//
//

#include <stdio.h>
#include <ctype.h>
void rm_space(char *lancuch);
int main()
{
    char lancuch[100];
    
    while(gets(lancuch) && isalpha(*lancuch))
    {
        rm_space(lancuch);
        puts(lancuch);
    }
    
    
    return 0;
}

void rm_space(char *lancuch)
{
    char temp[100];
    int i = 0;
    
    while(*lancuch)
    {
        if(*lancuch == ' ')
            *lancuch = *(lancuch+1);
        else
            *lancuch = *(lancuch);
        
        lancuch++;
    }
    
    printf("%s", lancuch);
}