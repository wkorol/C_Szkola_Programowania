//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 31.08.2015.
//
//

#include <stdio.h>
int main()
{
    char ch;
    int znaki = 0;
    
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
        {
            printf("Wprowadziles narazie %d znakow\n", znaki);
            continue;
        }
        znaki++;
    }
    
    
    
    return 0;
}