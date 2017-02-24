//
//  cwiczenie7.c
//  
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

void kopiuj_tab(int tab[], int tab2[], int a, int b);
#include <stdio.h>

int main()
{
    int tab[7] = {1,2,3,4,5,6,7};
    int tab2[3];
    
    kopiuj_tab(tab, tab2, 3, 5);
    
    return 0;
}




void kopiuj_tab(int tab[], int tab2[], int a, int b)
{
    int i;
    for(i=0; a<=b; a++, i++)
    {
        tab2[i] = tab[a];
        printf("cel1[%d] = %d ", i, tab2[i]);
    }
    
    printf("\n");
}