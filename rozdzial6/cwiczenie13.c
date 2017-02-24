//
//  cwiczenie13.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>

int main()
{
    double tab1[8], tab2[8];
    
    int i,j,k,l;
    double suma = 0;
    for(i=0;i<8;i++)
    {
        scanf("%lf", &tab1[i]);
    }
    
    for(j=0;j<i;j++) //Pętla sum, tab2
    {
        tab2[j] = suma+tab1[j];
        suma=tab2[j];
    }
        
    for(k=0;k<8;k++)  //Pętla wyswietlajaca elementy tab1 i tab2
    {
        printf("%.f | ", tab1[k]);
    }
    k=0;
    printf("\n");
    
    for(k=0;k<8;k++)
        printf("%-.f | ", tab2[k]);
    printf("\n");
    //
    
    return 0;
}
