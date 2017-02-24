//
//  butelki.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define MAX 100
int main(void)
{
    int licznik = MAX + 1;
    
    while (--licznik > 0)
    {
        printf("%d butelek piwa na stole, %d butelek piwa!\n", licznik, licznik);
        printf("Wez jedna i pusc ja w krag\n, %d butelek piwa!\n\n", licznik-1);
    }
    
    return 0;
}