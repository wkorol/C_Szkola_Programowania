//
//  proto1.c
//  
//
//  Created by Wiktor Korol on 20.09.2015.
//
//

#include <stdio.h>
int imax(int, int); //prototyp
int main(void)
{
    printf("Wieksza liczba z %d i %d jest %d.\n", 3, 5, imax(3,5));
    printf("Wieksza liczba z %d i %d jest %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}
int imax(n, m)
int n,m;
{
    int max;
    if(n>m)
        max = n;
    else
        max = m;
        return max;
}