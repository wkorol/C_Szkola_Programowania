//
//  cwiczenie13.c
//
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int licznik;
    double podstawa;
    int wykladnik;
    double wynik = 1;
    
        podstawa = atoi(argv[1]);
        wykladnik = atoi(argv[2]);
    for(licznik = 1; licznik <= wykladnik; licznik++)
    {
        wynik = wynik * podstawa;
    }
    
    printf("%.f do potegi %d = %.2f", podstawa, wykladnik, wynik);
    
    printf("\n");
    return 0;
}
