//
//  cwiczenie2.c
//  
//
//  Created by Wiktor Korol on 29.07.2015.
//
//

#include <stdio.h>
#include <ctype.h>
int main()
{
    int licz_znaki=0;
    char ch;
    
    while((ch = getchar()) != '#')
    {
        if(!isspace(ch))
        {
            printf("%c-%d ",ch, ch);
        }
        else if(ch == ' ')
            printf("' '-%d ", ch);
        licz_znaki++;
        if(licz_znaki%8 == 0)
        {
            printf("\n");
            licz_znaki = 0;
        }
    }
    
    
    return 0;
}