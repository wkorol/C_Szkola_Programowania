//
//  chwal1.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define POCHWALA "Ach, jakie wspaniale imie!"
int main(void)
{
    char imie[40];
    
    printf("Jak masz na imie?\n");
    scanf("%s", imie);
    printf("Witaj, %s, %s\n", imie, POCHWALA);
    return 0;
}