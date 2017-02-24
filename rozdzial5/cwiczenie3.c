//
//  cwiczenie3.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define TYDZIEN 7
int main()
{
    int dni, tygodnie, pozostale_dni;
    printf("Wprowadz liczbe dni\n");
    scanf("%d", &dni);
    while(dni>0)
    {
        tygodnie = dni/TYDZIEN;
        pozostale_dni = dni%TYDZIEN;
        printf("%d dni, to %d tygodni, %d dni\n", dni, tygodnie, pozostale_dni);
        scanf("%d", &dni);
    }
    
    printf("Koniec programu!\n");
    return 0;
}