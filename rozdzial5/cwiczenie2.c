//
//  cwiczenie2.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main()
{
    int liczba, i = 0;
    printf("Wprowadz liczbe calkowita:\n");
    scanf("%d", &liczba);
    i=liczba;
    while(i <= liczba+10)
    {
        printf("%d ", i);
        i++;
    }
    
    
    
    return 0;
}
