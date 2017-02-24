//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 29.07.2015.
//
//

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    int odstepy = 0, linie = 0, inne_znaki = 0;
    printf("Wprowadzaj znaki, '#' konczy program\n");
    
    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
            odstepy++;
        else if(ch == '\n')
            linie++;
        else
            inne_znaki++;
        
    }
    
    printf("Program wykryl %d odstepow, %d nowych linii, %d innych znakow\n", odstepy, linie, inne_znaki);
    
    
    
    
    
    return 0;
}