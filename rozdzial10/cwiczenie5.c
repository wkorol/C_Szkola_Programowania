//
//  cwiczenie3.c
//
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

#include <stdio.h>
int tabmax(int tab[], int n);
int tabmin(int tab[], int n);
int roznicatab(int max, int min);

int main()
{
    int tab[5] = {0,2,3,5,99};
    int max, min, roznica;
    
    
    max = tabmax(tab, 5);
    printf("Najwieksza wartosc to: %d\n", max);
    min = tabmin(tab, 5);
    printf("Najmniejsza wartosc to: %d\n", min);
    
    roznica = roznicatab(max, min);
    printf("Roznica miedzy tymi liczbami wynosi: %d\n", roznica);
    
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

int tabmin(int tab[], int n)
{
    int i, min;
    min = tab[0];
    for(i=1; i<n; i++)
    {
        if(tab[i] < min)
            min = tab[i];
    }
    
    
    return min;
}

int roznicatab(int max, int min)
{
    
    int roznica;
    
    roznica = max - min;
    
    
    return roznica;
}