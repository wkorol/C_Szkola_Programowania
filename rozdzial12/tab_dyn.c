//
//  tab_dyn.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
#include <stdlib.h> //potrzebujemy funkcji: malloc() i free()
int main(void)
{
    double *wsk;
    int max;
    int liczba;
    int i = 0;
    
    puts("Podaj maksymalna liczbe elementow (typu double):");
    scanf("%d", &max);
    wsk = (double * ) malloc(max * sizeof (double));
    if(wsk == NULL)
    {
        puts("Przydzial pamieci nie powiodl sie.");
        exit(EXIT_FAILURE);
    }
    
    //wsk wskazuje na tablice o liczbie elementow rownej max
    
    puts("Podaj elementy (k to koniec):");
    while(i<max && scanf("%lf", &wsk[i]) == 1)
        ++i;
    printf("Oto %d wprowadzonych elementow:\n", liczba = i);
    for(i = 0; i< liczba; i++)
    {
        printf("%7.2f ", wsk[i]);
        if(i%7 == 6)
            putchar('\n');
        
    }
    if(i%7 != 0)
        putchar('\n');
    puts("Koniec.");
    free(wsk);
    return 0;
}