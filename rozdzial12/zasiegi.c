//
//  zasiegi.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
int main()
{
    int x = 30; //oryginalna zmienna x
    
    printf("x w zewnetrznym bloku: %d\n", x);
    {
        int x = 77; //nowe x przeslania oryginalne x
        printf("x w wewnetrznym bloku: %d\n", x);
    }
    printf("x w zewnetrznym bloku: %d\n", x);
    while(x++<33)
    {
        int x = 100; //nowe x przeslania oryginalne x
        x++;
        printf("x w petli loop: %d\n", x);
    }
    printf("x w zewnetrznym bloku %d\n", x);
    
    return 0;
}