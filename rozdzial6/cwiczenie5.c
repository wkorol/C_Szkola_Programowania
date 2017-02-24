//
//  cwiczenie5.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>


int main()
{
    int i, granica_dolna, granica_gorna;
    
    printf("Wprowadz dolna granice: \n");
    scanf("%d", &granica_dolna);
    printf("Wprowadz gorna granice: \n");
    scanf("%d", &granica_gorna);
    printf("Liczba    Kwadrat    Szescian\n");
    for(i=granica_dolna; i<=granica_gorna; i++)
        printf("%6d %7d %12d\n", i, i*i, i*i*i);
    
    
    
    
    return 0;
}