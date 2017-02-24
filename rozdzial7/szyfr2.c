//
//  szyfr2.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#include <ctype.h> //dla funkcji isalpha()
int main(void)
{
    char ch;
    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch)) //Jesli znak jest litera
            putchar(ch+1); //zmien go
        else
            putchar(ch); //jesli nie, wyswietl go bez zmian
    }
    putchar(ch); //wyswietl znak nowej linii
    return 0;
}