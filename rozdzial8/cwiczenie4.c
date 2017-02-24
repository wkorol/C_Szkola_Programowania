//
//  cwiczenie4.c
//  
//
//  Created by Wiktor Korol on 01.09.2015.
//
//

#include <stdio.h>
#include <ctype.h>

#define W_SLOWIE 1
#define POZA_SLOWEM 0
int main()
{
    char ch;
    char tekst[100];
    
    
    int i = 0, slowa = 0,  flaga = 0, litery = 0;
    
    flaga = POZA_SLOWEM;
    
    while((ch = getchar())!= '\n')
    {
            if(isalpha(ch))
                litery++;
            if (isspace(ch))
                flaga = POZA_SLOWEM;
            else if(flaga == POZA_SLOWEM)
            {
                flaga = W_SLOWIE;
                slowa++;
            }
    
    }
    
    printf("Naliczono %d slow %d liter\n", slowa, litery);
    printf("Srednia liczba liter w slowie to %.2f\n", (float)(litery/slowa));
    
    return 0;
    
}


 
