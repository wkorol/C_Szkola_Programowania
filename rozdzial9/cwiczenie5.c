//
//  cwiczenie5.c
//  
//
//  Created by Wiktor Korol on 30.09.2015.
//
//

#include <stdio.h>

void wieksze_od(int *x, int *y);
int main()
{
    int x, y;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &x);
    printf("Podaj druga liczbe: ");
    scanf("%d", &y);
    
    wieksze_od(&x,&y);
    
    printf("Teraz x = %d i y = %d\n", x, y);
    return 0;
}

void wieksze_od(int *x, int *y)
{
    int temp;
    if (x>y)
    {
        temp = *x;
        *y = temp;
    }
    else
        temp = *y;
        *x = temp;
}