//
//  cwiczenie4.c
//  
//
//  Created by Wiktor Korol on 15.11.2015.
//
//

#include <stdio.h>
int funkcja();
int ile_razy = 0;
int main()
{
    int liczba, x = 0;
    while(scanf("%d", &liczba) == 1)
    {
        x = funkcja();
    }
    
    printf("%d\n", x);
    
    return 0;
}

int funkcja()
{
    ile_razy++;
    return ile_razy;
}