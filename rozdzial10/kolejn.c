//
//  kolejn.c
//  
//
//  Created by Wiktor Korol on 12.10.2015.
//
//

#include <stdio.h>
int dane[2] = {100, 200};
int wiecejdanych[2] = {300, 400};
int main(void)
{
    int *w1, *w2, *w3;
    w1 = w2 = dane;
    w3 = wiecejdanych;
    
    printf(" *w1 = %d, *w2 = %d, *w3 = %d\n", *w1, *w2, *w3);
    printf("*w1++ = %d, *++w2 = %d, (*w3)++ = %d\n", *w1++, *++w2, (*w3)++);
    printf("*w1 = %d, *w2 = %d, *w3 = %d\n", *w1, *w2, *w3);
    
    return 0;
}