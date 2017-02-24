//
//  binar.c
//  
//
//  Created by Wiktor Korol on 20.09.2015.
//
//

#include <stdio.h>
void do_binar(int n);
int main(void)
{
    int liczba;
    printf("Podaj liczbe calkowita (q konczy program):\n");
    while(scanf("%d", &liczba) == 1)
    {
        printf("Odpowiednik dwojkowy: ");
        do_binar(liczba);
        putchar('\n');
        printf("Podaj liczbe calkowita (q konczy program):\n");
    }
    return 0;
}

void do_binar(int n) //funkcja rekurencyjna
{
    int r;
    r = n%2;
    if(n >= 2)
        do_binar(n/2);
    putchar('0' + r);
    return;
}