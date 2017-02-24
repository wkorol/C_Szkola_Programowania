//
//  cwiczenie10.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
int main()
{
    int rozmiar = 8;
    int tab[rozmiar];
    int i,j;
    
    for(i=0; i<rozmiar; i++)
    {
        scanf("%d", &tab[i]);
    }
    
    for(j=i-1; j>=0; j--)
    {
        printf("%d ", tab[j]);
    }
    
    return 0;
}