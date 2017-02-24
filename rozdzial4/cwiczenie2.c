//
//  cwiczenie2.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#include <string.h>

int main()
{
    char imie[40];
    int x;
    printf("Wprowadź swoje imię: \n");
    scanf("%s", imie);
    printf("\"%20s\"\n", imie);
    printf("\"%-20s\"\n", imie);
    x = strlen(imie);
    printf("\"%*s\"\n", x+3, imie);
    
    
    return 0;
}