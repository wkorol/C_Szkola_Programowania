//
//  cwiczenie12.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#include <math.h>
int main()
{
    int rozmiar = 8;
    int tab[rozmiar];
    int i,j=0;
    
    
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=pow(2,i);
    }
    while(j<i)
    {
        printf("2^%d = %d\n",j, tab[j]);
        
        j++;
    }
    
    
    
    return 0;
}