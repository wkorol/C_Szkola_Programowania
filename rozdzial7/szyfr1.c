//
//  szyfr1.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#define ODSTEP ' ' 
int main(void)
{
    char ch;
    ch = getchar(); //odczytanie znaku
    while (ch!= '\n') //dopoki nie ma konca wiersza
    {
        if (ch == ODSTEP) // pozostaw znak spacji bez zmian
            putchar(ch);
        else
            putchar(ch+1); //zmien pozostale znaki
        ch = getchar(); //Wczytaj kolejny znak
    }
    putchar(ch); //wyswietl znak nowej linii
    
    
    return 0;
}