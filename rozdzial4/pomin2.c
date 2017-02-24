//
//  pomin2.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main(void)
{
    int n;
    printf("Podaj prosze trzy liczby calkowite:\n");
    scanf("%*d %*d %d", &n);
    printf("Ostatnia podana liczba byla %d\n", n);
    return 0;
}