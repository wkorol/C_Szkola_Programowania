//
//  cwiczenie14.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>

int main()
{
    int i=0,j;
    char tab[255];
    
    scanf("%c", &tab[i]);
    while(tab[i]!='\n')
    {
        i++;
        scanf("%c", &tab[i]);
    }
    
    
    for(j=i-1; j>=0;j--)
    {
        printf("%c", tab[j]);
    }
    printf("\n");
    
    return 0;
}