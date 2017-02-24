//
//  wielrzut.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
#include <stdlib.h> // srand()
#include <time.h> // time()
#include "rzutkosc.h" //potrzeba funkcji rzucaj_n_razy i zmiennej liczba_rzutow
int liczba_rzutow;
int main(void)
{
    int rzuty, wynik;
    int scianki;
    srand((unsigned int) time(0)); //losowe ziarno
    printf("Podaj liczbe scianek, 0 oznacza koniec.\n");
    while(scanf("%d", &scianki) == 1 && scianki > 0)
    {
        printf("Ile rzutow?\n");
        scanf("%d", &rzuty);
        wynik = rzucaj_n_razy(rzuty, scianki);
        printf("Wyrzucono razem %d uzywajac %d %d-sciennych kosci\n", wynik, rzuty, scianki);
        printf("Podaj liczbe scianek, 0 oznacza koniec.\n");
    }
    
    printf("Funkcja rzucaj() zostala wywolana %d razy.\n", liczba_rzutow); //zmienna zewnetrzna
    
    printf("Zycze duzo szczescia!\n");
}