//
//  lancuchy.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define NOTATKA "Doskonala gra aktorow!"
int main(void)
{
    printf("*%2s*\n", NOTATKA);
    printf("*%25s*\n", NOTATKA);
    printf("*%25.5s*\n", NOTATKA);
    printf("*%-25.5s*\n", NOTATKA);
    return 0;
}