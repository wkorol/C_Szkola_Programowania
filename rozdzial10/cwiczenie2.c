//
//  cwiczenie2.c
//  
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

#include <stdio.h>

void kopiuj_tab(double tab[], double tab2[], int n);
void kopiuj_wsk(double tab[], double tab2[], int n);
int main()
{
    double zrodlo[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double cel1[5];
    double cel2[5];
    
    kopiuj_tab(zrodlo, cel1, 5);
    kopiuj_wsk(zrodlo, cel2, 5);
    
    
    return 0;
}

void kopiuj_tab(double tab[], double tab2[], int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        tab2[i] = tab[i];
        printf("cel1[%d] = %.2f ", i, tab2[i]);
    }
    
    printf("\n");
}

void kopiuj_wsk(double tab[], double tab2[], int n)
{
    int i;
    double *wsk1 = tab;
    double *wsk2 = tab2;
    
    for(i = 0; i<n; i++)
    {
        *wsk2 = *(wsk1 + i);
        printf("cel2[%d] = %.2f ", i, *wsk2);
    }
    
    
    printf("\n");
    
}