//
//  cwiczenie6.c
//
//
//  Created by Wiktor Korol on 30.09.2015.
//
//

#include <stdio.h>
#include <ctype.h>
int zwracanie(char *ch);
int main()
{
    char ch;
    int numer;
    while((ch = getchar()) != EOF)
    {
        
        if(ch == '\n')
            continue;
        
        numer = zwracanie(&ch);
        printf("%c - %d\n", ch, numer);
        
    }
    
    
    return 0;
    
}

int zwracanie(char *ch)
{
    int liczba;
    if(islower(*ch))
    {
        return liczba = *ch - 'a' + 1;
    }
    
    if(isupper(*ch))
    {
        return liczba = *ch - 'A' + 1;
    }
    
    else return liczba = -1;
    
    return 0;
}
