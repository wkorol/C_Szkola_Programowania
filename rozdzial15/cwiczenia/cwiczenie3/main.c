//
//  main.c
//  cwiczenie3
//
//  Created by Wiktor Korol on 11.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>

int iloscbitow(int n);

int main(int argc, const char * argv[]) {
    
    int n;
    
    printf("Wprowadź liczbę: ");
    scanf("%d", &n);
    printf("%d\n", n);
    
    printf("Liczba włączonych bitów w liczbie %d wynosi %d\n", n, iloscbitow(n));
    
    
    
    return 0;
}


int iloscbitow(int n)
{
    int liczbabitow = 0;
    int i = 0;
    while(i<32)
    {
        if((01&n) == 1)
        {
            liczbabitow++;
        }
        
        n>>=1;

        
        i++;
    }
    
    
    
    return liczbabitow;
}
