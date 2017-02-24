//
//  rostki.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int aplus, plusb;
    
    aplus = a++; //przyrostek
    plusb = ++b; //przedrostek
    printf("a   aplus    b     plusb \n");
    printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);
    return 0;
}