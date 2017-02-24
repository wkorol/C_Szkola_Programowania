//
//  cwiczenie2.c
//  
//
//  Created by Wiktor Korol on 31.08.2015.
//
//

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    int znaki = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
        {
            printf("%d-\\n ", ch);
        }
        else if(ch == '\t')
            printf("%d-\\t ", ch);
        else if(iscntrl(ch))
            printf("%d-^%c ", ch, ch+64);
        else
            printf("%d-%c ", ch, ch);
        if(znaki%10 == 0)
        {
            printf("\n");
            znaki = 0;
        }
        znaki++;
    }
    
    
    
    
    return 0;
}