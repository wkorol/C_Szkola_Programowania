//
//  cwiczenie5.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#include <string.h>
int main()
{
    char imie[40], nazwisko[40];
    int x, y;
    printf("Wprowadź swoje imię:\n");
    scanf("%s", imie);
    printf("Wprowadź swoje nazwisko:\n");
    scanf("%s", nazwisko);
    x = strlen(imie);
    y = strlen(nazwisko);
    printf("%s %s\n", imie, nazwisko);
    printf("%*d %*d\n", x, x, y, y);
    
    
    
    return 0;
}