//
//  imie2.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#define MAX 81
int main(void)
{
    char imie[MAX];
    char *wsk;
    printf("Czesc, jak masz na imie?\n");
    wsk = gets(imie);
    printf("%s? A! %s!\n", imie, wsk);
    return 0;
}