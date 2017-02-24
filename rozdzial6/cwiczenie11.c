//
//  cwiczenie11.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#include <math.h>
int main()
{
    
    int i;
    float ile;
    float ciag1 = 0, ciag2 = 0;
    printf("Ile wyrazow chcesz zsumowac?\n");
    scanf("%f", &ile);
    
    for(i=1; i<=ile; i++)
    {
        ciag1 = ciag1 + 1.0/(1.0+i);
        ciag2 = ciag2 + pow(-1.0,i)/(1.0+i);
    }
    
    
    printf("%f\n", ciag1);
    printf("%f\n", ciag2);
    
    
    
    return 0;
}