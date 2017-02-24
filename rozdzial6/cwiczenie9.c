//
//  cwiczenie9.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>

int main()
{
    int i,dolna, gorna;
    int suma = 0;
    printf("Podaj dolna i gorna granice\n");
    scanf("%d %d", &dolna, &gorna);
    while(dolna<gorna)
    {
        for(i=dolna; i<=gorna; i++)
            suma = suma+i*i;
        
        printf("Suma kwadratow od %d do %d wynosi %d\n", dolna, gorna, suma);
        
        printf("Podaj nastepny przedzial: \n");
        scanf("%d %d", &dolna, &gorna);
        suma=0;
    }
    printf("Koniec\n");
    
    
    
    
    return 0;
}