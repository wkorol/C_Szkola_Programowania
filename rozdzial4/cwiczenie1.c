//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>

int main()
{
    


char imie[40], nazwisko[40];

printf("Podaj swoje imię:\n");
scanf("%s", imie);
printf("Teraz podaj swoje nazwisko:\n");
scanf("%s", nazwisko);
printf("%s,%s\n", nazwisko, imie);

return 0;
}