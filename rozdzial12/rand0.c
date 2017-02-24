//
//  rand0.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//
//generuje liczby losowe
#include <stdio.h>

static unsigned long int nast = 1; //ziarno (ang. seed)
int rand0(void)
{
    //magiczna formula generujace liczby pseudolosowe
    nast = nast * 1103515245 + 12345;
    return (unsigned int) (nast/65536) % 32768;
}