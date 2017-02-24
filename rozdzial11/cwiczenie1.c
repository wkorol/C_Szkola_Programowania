//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 03.11.2015.
//
//

#include <stdio.h>
#define ROZMIAR 10
void pobieranie(int n);
int main()
{
    
    pobieranie(ROZMIAR);
    
    
    
    return 0;
}

void pobieranie(int n)
{
    int i = 0;
    char znak;
    while(scanf("%c", &znak) != 0 && i < n)
    {
        i++;
    }
    
}