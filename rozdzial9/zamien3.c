//
//  zamien3.c
//  
//
//  Created by Wiktor Korol on 22.09.2015.
//
//

#include <stdio.h>
void zamiana(int *u, int *v);
int main(void)
{
    int x = 5, y = 10;
    printf("Poczatkowo x = %d, a y = %d.\n", x, y);
    zamiana(&x, &y); // wyslanie adresow do funkcji
    printf("A teraz x = %d, a y = %d.\n", x,y);
    return 0;
}

void zamiana(int *u, int *v)
{
    int temp;
    temp = *u; // otrzymuje wartosc na ktora wskazuje u
    *u = *v;
    *v = temp;
}