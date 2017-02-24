//
//  cwiczenie3.c
//
//
//  Created by Wiktor Korol on 26.07.2015.
//
//

#include <stdio.h>
int main()
{
    int i,j;
    char b = 'F';
    
    for(j=0; j<6; j++)
    {
        for(i=0; i<=j;i++)
            printf("%c", b-i);
        printf("\n");
    }
    
    
    return 0;
}