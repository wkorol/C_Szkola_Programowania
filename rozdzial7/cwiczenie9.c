//
//  cwiczenie9.c
//  
//
//  Created by Wiktor Korol on 12.08.2015.
//
//

#include <stdio.h>

int main()
{
    int liczba;
    int i;
    int dzielnik;
    int liczba_dzielnikow = 0;
    
    printf("Podaj liczbe calkowita\n");
    scanf("%d", &liczba);
    
    for(i=0; i<=liczba; i++)
    {
        for(dzielnik = 2; dzielnik<=i; dzielnik++)
        {
            if(i%dzielnik == 0)
                liczba_dzielnikow++;
            
        }
        
        if(liczba_dzielnikow == 1)
            printf("%d ", i);
        
        liczba_dzielnikow = 0;
        dzielnik = 2;
            
    }
    
    
    
    
    
    
    return 0;
}
