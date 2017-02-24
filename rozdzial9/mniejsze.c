//
//  mniejsze.c
//  
//
//  Created by Wiktor Korol on 20.09.2015.
//
//

#include <stdio.h>
int imin(int, int);
int main()
{
    int zlo1, zlo2;
    printf("Podaj dwie liczby calkowite (q konczy program):\n");
    while(scanf("%d %d", &zlo1, &zlo2) == 2)
    {
        printf("Mniejsza liczba sposrod %d i %d jest %d.\n", zlo1, zlo2, imin(zlo1,zlo2));
        printf("Podaj dwie liczby calkowite (q konczy program):\n");
    }
    return 0;
}
int imin(int n, int m)
{
    int min;
    if(n<m)
        min=n;
    else
        min=m;
    return min;
}