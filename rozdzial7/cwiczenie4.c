//
//  cwiczenie4.c
//  
//
//  Created by Wiktor Korol on 29.07.2015.
//
//

#include <stdio.h>
int main()
{
    char ch;
    int operacja1 = 0, operacja2 = 0;
    
    while((ch=getchar())!= '#')
    {
     if(ch == '!')
     {
         printf("!!");
         operacja1++;
     }
        else if(ch == '.')
        {
            printf("!");
            operacja2++;
        }
        else
            putchar(ch);
    }
    
    printf("Zamieniono %d wykrzyknikow, %d kropek\n", operacja1, operacja2);
    
    
    
    
    
    return 0;
}