//
//  echo.c
//  
//
//  Created by Wiktor Korol on 26.08.2015.
//
//

#include <stdio.h>
int main()
{
    char ch;
    while((ch = getchar()) != '#')
        putchar(ch);
    
    
    return 0;
}