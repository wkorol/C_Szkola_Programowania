//
//  cwiczenie6.c
//
//
//  Created by Wiktor Korol on 30.09.2015.
//
//

#include <stdio.h>
#include <ctype.h>
int zwracanie(char ch, int i);
int main()
{
    char ch;
    int numer;
    int i = 0;
    while((ch = getchar()) != EOF)
    {
        
        if(ch == '\n')
            continue;
        ch = tolower(ch);
        numer = zwracanie(ch, i);
        printf("%d - %c\n", numer, ch);
        
    }
    
    
    return 0;
    
}

int zwracanie(char ch, int i)
{
    int liczba;
    
    int k = ch - 'a'+1;
    if(i<k)
      i = zwracanie(ch, i+1);
    if(!isalpha(ch))
        i = -1;
    
    return i;
}
