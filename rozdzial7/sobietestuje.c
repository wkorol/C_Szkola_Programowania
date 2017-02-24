//
//  sobietestuje.c
//  
//
//  Created by Wiktor Korol on 19.08.2015.
//
//

#include <stdio.h>
int main()
{
    
    int rzedy = 5, odstepy, i, rosnace, malejace;
    char litera;
    
    scanf("%c", &litera);
    for(i=0; i<rzedy; i++)
    {
        for(odstepy = 5; odstepy>i; odstepy--)
            printf(" ");
        for(malejace = 0; malejace<=i; malejace++, litera++)
            printf("%c", litera-4);
        litera = litera - malejace;
        for(rosnace = 0; rosnace<i; rosnace++, litera--)
            printf("%c", litera-rzedy+i);
        litera = litera + rosnace;
        
        
        printf("\n");
    }
    
    
    
    
    
    
    return 0;
}