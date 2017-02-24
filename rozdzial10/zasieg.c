//
//  zasieg.c
//  
//
//  Created by Wiktor Korol on 11.10.2015.
//
//

#include <stdio.h>
#define ROZMIAR 4
int main(void)
{
    int zm1 = 44;
    int tab[ROZMIAR];
    int zm2 = 88;
    int i;
    printf("zm1 = %d, zm2 = %d\n", zm1, zm2);
    for (i=-1; i<=ROZMIAR; i++) {
        tab[i]=2*i+1;
    }
    for (i=-1; i<7; i++) {
        printf("%2d %d\n", i, tab[i]);
    }
    printf("zm1 = %d, zm2 = %d\n", zm1, zm2);
    return 0;
}