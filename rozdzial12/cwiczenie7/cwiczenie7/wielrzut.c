//
//  cwiczenie7
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
    int wynik, kosci, kolejki, i;
    int scianki;
    srand((unsigned int) time(0)); //losowe ziarno
    printf("Wprowadz liczbe kolejek; wybierz q aby zakonczyc\n");
    
    while(scanf("%d", &kolejki) == 1 && kolejki > 0)
    {
        printf("Ile scian i ile kosci\n");
    if(scanf("%d", &scianki) == 1 && scianki > 0 && scanf("%d", &kosci) == 1 && kosci > 0)
    {
        printf("Oto %d kolejek rzutow %d %d-sciennymi kostkami:\n", kolejki, kosci , scianki);
        for(i = 0; i<kolejki; i++)
        {
            wynik = rzucaj_n_razy(kosci, scianki);
            printf("%d ", wynik);
            if(i % 14 == 0 && i > 0)
                printf("\n");
        }
        printf("\nWprowadz liczbe kolejek; wybierz q aby zakonczyc\n");
    }
    }
   
    
    printf("Zycze duzo szczescia!\n");
}


