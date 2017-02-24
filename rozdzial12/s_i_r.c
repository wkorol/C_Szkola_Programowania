//
//  s_i_r.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
static unsigned long int nast = 1; //ziarno (ang. seed)
int rand1(void)
{
    //magiczna formula generujace liczby pseudolosowe
    nast = nast * 1103515245 + 12345;
    return (unsigned int) (nast/65536) % 32768;
}

void srand1(unsigned int ziarno)
{
    nast = ziarno;
}