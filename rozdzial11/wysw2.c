//
//  wysw2.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
int wysw2(const char * lancuch)
{
    int licznik = 0;
    while(*lancuch)
    {
        putchar(*lancuch++);
        licznik++;
    }
    putchar('\n'); //znak nowej linii nie jest liczony
    return(licznik);
}