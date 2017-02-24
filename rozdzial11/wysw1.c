//
//  wysw1.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
void wysw1(const char * lancuch) //lancuch nie ulega zmianie
{
    while(*lancuch != '\0')
        putchar(*lancuch++);
}