//
//  licz_zn.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#define KROPKA '.'
int main(void)
{
    int ch;
    int licznik = 0;
    while((ch = getchar()) != KROPKA)
    {
        if (ch!= '"' && ch!= '\'')
            licznik++;
    }
    printf("W zdaniu jest %d znakow nie bedacymi cudzyslowami lub apostrofami.\n", licznik);
    
    return 0;
}