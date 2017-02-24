//
//  cwiczenie6.c
//  
//
//  Created by Wiktor Korol on 02.08.2015.
//
//

#include <stdio.h>



int main()
{
    char ch[10000];
    int ciagot = 0;
    int i = 0, j =0;
    
    
    while ((ch[i] = getchar()) != '#')
    
    {
        i++;
    }
    
    for(j=0; j<i;j++)
    {
        if(ch[j] == 'o' && ch[j+1] == 't')
            ciagot++;
    
    }
    
    printf("Ciag ot powtorzyl sie %d razy\n", ciagot);
    
    
    
    
    return 0;
}