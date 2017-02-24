//
//  cwiczenie3.c
//
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

#include <stdio.h>
int tabmax(int tab[], int n);
int indeksmax(int tab[], int max, int n);

int main()
{
    int tab[5] = {6,2,3,5,4};
    int max, i;
    
    
    max = tabmax(tab, 5);
    printf("Najwieksza wartosc to: %d\n", max);
    i = indeksmax(tab, max, 5);
    printf("Indeks tej wartosci to to: %d\n", i);
    
    return 0;
}

int tabmax(int tab[], int n)
{
    int i, max;
    max = tab[0];
    for(i=1; i<n; i++)
    {
        if(tab[i] > max)
            max = tab[i];
    }
    
    
    return max;
}

int indeksmax(int tab[], int max, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        if(tab[i] == max)
            break;
    }
    
    
    
    return i;
}