//
//  imie1.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#define MAX 81

int main(void)
{
    char imie[MAX]; //przydziela miejsce
    printf("Czesc, jak masz na imie?\n");
    gets(imie); //umieszcza lancuch w tablicy imie
    printf("Ladne imie, %s.\n", imie);
    return 0;
}