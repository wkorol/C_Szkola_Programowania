//
//  cwiczenie10.c
//  
//
//  Created by Wiktor Korol on 25.08.2015.
//
//

#include <stdio.h>
#define WOLNY 17850
#define GRODZINY 23900
#define MAL_WSP 29750
#define MAL_OSB 14875
int main()
{
    int kategoria, dochod;
    float wynik;
    
    printf("Wybierz kategorie dochodowa: \n");
    printf("1. Stan wolny\n");
    printf("2. Głowa rodziny\n");
    printf("3. Małżeństwo, rozliczenie wspólne\n");
    printf("4. Małżeństwo, rozliczenie osobne\n");
    printf("5. Wyjście z programu\n");
    
    while(scanf("%d", &kategoria) == 1 && (kategoria >= 1 && kategoria <=5))
    {
        if(kategoria == 5)
            break;
        
        printf("Wprowadz wysokosc dochodu: \n");
        scanf("%d", &dochod);
        if(kategoria == 1)
        {
            if(dochod > WOLNY)
                wynik = 0.15 * WOLNY + 0.28 * (dochod - WOLNY);
            else
                wynik = 0.15 * WOLNY;
            
        }
        if(kategoria == 2)
        {
            if(dochod > GRODZINY)
                wynik = 0.15 * GRODZINY + 0.28 * (dochod - GRODZINY);
            else
                wynik = 0.15 * GRODZINY;
            
        }
        if(kategoria == 3)
        {
            if(dochod > MAL_WSP)
                wynik = 0.15 * MAL_WSP + 0.28 * (dochod - MAL_WSP);
            else
                wynik = 0.15 * MAL_WSP;
            
        }
        if(kategoria == 4)
        {
            if(dochod > MAL_OSB)
                wynik = 0.15 * MAL_OSB + 0.28 * (dochod - MAL_OSB);
            else
                wynik = 0.15 * MAL_OSB;
            
        }
        
        printf("Wysokosc kwoty podatku wynosi %.2f\n", wynik);
        
        
        
        printf("Wybierz kategorie dochodowa: \n");
        printf("1. Stan wolny\n");
        printf("2. Głowa rodziny\n");
        printf("3. Małżeństwo, rozliczenie wspólne\n");
        printf("4. Małżeństwo, rozliczenie osobne\n");
        printf("5. Wyjście z programu\n");
    }
    
    printf("Koniec\n");
    
    
    
    return 0;
}
