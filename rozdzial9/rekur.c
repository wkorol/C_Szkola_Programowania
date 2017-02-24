//
//  rekur.c
//  
//
//  Created by Wiktor Korol on 20.09.2015.
//
//

#include <stdio.h>
void gora_i_dol(int);
int main(void)
{
    gora_i_dol(1);
    return 0;
}

void gora_i_dol(int n)
{
    printf("Poziom: %d: adres zmiennej n: %p\n", n, &n);
    if(n<4)
        gora_i_dol(n+1);
    printf("POZIOM %d: adres zmiennej: %p\n", n, &n);
}