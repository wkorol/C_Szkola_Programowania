//
//  cwiczenie3.c
//  
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

#include <stdio.h>
int tabmax(int tab[], int n);

int main()
{
    int tab[5] = {1,2,3,5,4};
    int max;
    
    
    max = tabmax(tab, 5);
    printf("Najwieksza wartosc to: %d\n", max);
    
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