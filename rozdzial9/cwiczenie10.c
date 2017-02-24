//
//  cwiczenie10.c
//  
//
//  Created by Wiktor Korol on 11.10.2015.
//
//

#include <stdio.h>

void Fibonacci(int n);
int main()
{
    int n;
    printf("Wprowadz dla ilu n początkowych wyrazow chcesz wygenerować ciąg Fibonnaciego ");
    scanf("%d", &n);
    
    Fibonacci(n);
    
    
}

void Fibonacci(int n)
{
    int i;
    int tab[n];
    
    tab[0] = 0;
    tab[1] = 1;
    if(n==0)
        printf("F[0] = %d\n", tab[0]);
    else if(n==1)
        printf("F[0] = %d, F[1] = %d\n", tab[0], tab[1]);
    else
    {
        printf("F[0] = %d, F[1] = %d, ",tab[0], tab[1]);
        for(i=2; i<=n; i++)
        {
            tab[i] = tab[i-1]  + tab[i-2];
            printf(", F[%d] = %d", i, tab[i]);
        }
        printf("\n");
    }
    
}
