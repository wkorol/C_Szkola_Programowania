//
//  r_test1.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
extern void srand1(unsigned int x);
extern int rand1(void);
int main(void)
{
    int liczba;
    unsigned ziarno;
    printf("Podaj wartosc ziarna:\n");
    while(scanf("%u", &ziarno) == 1)
    {
        srand1(ziarno); //reset ziarna
        for(liczba = 0; liczba < 5; liczba++)
            printf("%d\n", rand1());
        printf("Podaj nastepna wartosc ziarna (k to koniec)\n");
    }
    
    printf("Koniec\n");
    return 0;
}
