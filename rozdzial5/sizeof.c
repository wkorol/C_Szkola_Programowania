//
//  sizeof.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;
    
    intsize = sizeof (int);
    printf("n = %d, n ma %zd bajty; wszystkie liczby calkowite maja %zd bajty.\n", n, sizeof(n), intsize);

    
    
    return 0;
}