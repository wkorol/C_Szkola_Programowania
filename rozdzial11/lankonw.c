//
//  lankonw.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char liczba[30];
    char *koniec;
    long wartosc;
    
    puts("Podaj liczbe(wpisz pusty wiersz, aby zakonczyc):");
    while(gets(liczba) && liczba[0] != '\0')
    {
        wartosc = strtol(liczba, &koniec, 10);
        printf("wartosc %ld, poprzedza %s (%d)\n", wartosc, koniec, *koniec);
        
        wartosc = strtol(liczba, &koniec, 16);
        printf("wartosc %ld, poprzedza %s (%d)\n", wartosc, koniec, *koniec);
        puts("nastepna liczba:");
        
    }
    
    puts("Do wdzenia!\n");
    return 0;
}