//
//  rzedy2.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define RZEDY 6
#define ZNAKI 6
int main(void)
{
    int rzad;
    char ch;
    
    for(rzad = 0; rzad < RZEDY; rzad++)
    {
        
        for(ch = ('A' + rzad); ch < ('A' + ZNAKI); ch++)
            printf("%c", ch);
        printf("\n");
    }
}