//
//  naglowek1.c
//  
//
//  Created by Wiktor Korol on 16.09.2015.
//
//

#include <stdio.h>
#define NAZWA "MEGATHINK, INC."
#define ADRES "10 Megabuck Plaza"
#define MIEJSCOWOSC "Megapolis, CA949094"
#define GRANICA 65
void gwiazdki(void); //prototyp funkcji
int main(void)
{
    gwiazdki();
    printf("%s\n", NAZWA);
    printf("%s\n", ADRES);
    printf("%s\n", MIEJSCOWOSC);
    gwiazdki(); //wywolanie funkcji
    return 0;
}

void gwiazdki(void)
{
    int licznik;
    for (licznik=0; licznik<= GRANICA; licznik++) {
        putchar('*');
    }
    putchar('\n');
}