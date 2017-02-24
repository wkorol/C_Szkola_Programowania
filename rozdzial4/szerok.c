//
//  szerok.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define STRONY 732
int main(void)
{
    printf("*%d*\n", STRONY);
    printf("*%2d*\n", STRONY);
    printf("%10d*\n", STRONY);
    printf("*%-10d*\n", STRONY);
    return 0;
}