//
//  forc99.c
//  
//
//  Created by Wiktor Korol on 14.11.2015.
//
//

#include <stdio.h>
int main()
{
    int n = 10;
    
    printf("Poczatkowo n = %d\n", n);
    for(int n = 1; n< 3; n++)
        printf("petla 1: n = %d\n", n);
    printf("Po petli 1, n = %d\n", n);
    for(int n = 1; n< 3; n++)
    {
        printf("petla 2 indeks n = %d\n", n);
        int n = 30;
        printf("petla 2: n = %d\n", n);
        n++;
    }
    
    printf("Po petli 2, n = %d\n", n);
}