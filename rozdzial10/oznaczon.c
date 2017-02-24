//
//  oznaczon.c
//  
//
//  Created by Wiktor Korol on 11.10.2015.
//
//

#include <stdio.h>
#define MIESIACE 12
int main(void)
{
    int dni[MIESIACE] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    for(i = 0; i<MIESIACE; i++)
        printf("%2d %d\n", i+1, dni[i]);
    return 0;
}