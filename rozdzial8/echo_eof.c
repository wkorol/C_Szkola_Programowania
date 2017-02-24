//
//  echo_eof.c
//  
//
//  Created by Wiktor Korol on 26.08.2015.
//
//

#include <stdio.h>
int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
