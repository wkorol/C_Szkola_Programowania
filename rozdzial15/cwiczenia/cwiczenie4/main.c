//
//  main.c
//  cwiczenie3
//
//  Created by Wiktor Korol on 11.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
int zawartoscbitu(int n, int numer);

int main(int argc, const char * argv[]) {
    
    int n, numer;
    
    printf("Wprowadź liczbę: ");
    scanf("%d", &n);
    printf("Wprowadź numer bitu dla którego chcesz sprawdzić wartość: ");
    scanf("%d", &numer);
    
    printf("Zawartość bitu o numerze %d w liczbie %d wynosi: %d\n", numer, n, zawartoscbitu(n, numer));
    
    
    
    
    
    
    return 0;
}


int zawartoscbitu(int n, int numer)
{
    int zawartoscbitu = 0;
    int i = 0;
    while(i<32)
    {
        if((01&n) == 1 && i == numer)
        {
            zawartoscbitu = 1<<numer;
        }
        n>>=1;
        i++;
    }
    
    
    
    return zawartoscbitu;
}
