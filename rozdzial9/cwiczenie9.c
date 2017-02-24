//
//  cwiczenie9.c
//  
//
//  Created by Wiktor Korol on 11.10.2015.
//
//

#include <stdio.h>
void do_podst_n(int n, int x);
int main(void)
{
    int liczba, system;
    printf("Podaj liczbe calkowita (q konczy program):\n");
    while(scanf("%d", &liczba) == 1)
    {
        printf("Podaj w jakim systemie chcesz przedstawic podana liczbe (od 2 do 10):\n");
        while(scanf("%d", &system) == 1)
        {
            if(system<2 || system > 10)
            {
                printf("Sprobuj jeszcze raz! (od 2 do 10)\n");
                continue;
            }
            else
                break;
        }
        printf("Odpowiednik %dtkowy liczby %d = ", system, liczba);
        do_podst_n(liczba, system);
        putchar('\n');
        printf("Podaj liczbe calkowita (q konczy program):\n");
    }
    return 0;
}

void do_podst_n(int n, int x) //funkcja rekurencyjna
{
    int r;
    r = n%x;
    if(n >= x)
        do_podst_n(n/x, x);
    putchar('0' + r);
    return;
}