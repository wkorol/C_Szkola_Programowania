//
//  kwadraty.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main(void)
{
    int num = 1;
    
    while (num < 21)
    {
        printf("%10d %10d\n", num, num*num);
        num = num+1;
    }
    return 0;
}