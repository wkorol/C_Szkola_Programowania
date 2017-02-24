//
//  r_test0.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
extern int rand0(void);
int main(void)
{
    int liczba;
    for(liczba = 0; liczba<5; liczba++)
        printf("%d\n", rand0());
    
    return 0;
}