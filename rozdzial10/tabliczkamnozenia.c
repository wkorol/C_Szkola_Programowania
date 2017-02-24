//
//  tabliczkamnozenia.c
//  
//
//  Created by Wiktor Korol on 23.10.2015.
//
//

#include <stdio.h>
int main()
{
    int i, j, x=0, y =0;
    
    for(i=0; i<=9; i++)
    {
        for(j=0;j<=9; j++)
        {
            while(y < i)
            {
                x = x + j;
                y++;
            }
            printf(" %3d ", x);
            x = 0;
            y = 0;
        }
        printf("\n");
        
        
    }
    
    
    
    return 0;
}