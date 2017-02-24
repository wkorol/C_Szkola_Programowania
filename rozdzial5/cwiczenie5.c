//
//  cwiczenie5
//
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main()

{
    int licznik, suma;
    
    licznik = 0;
    suma = 0;
    int x;
    printf("Sumę ilu liczb całkowitych chcesz policzyć?\n");
    scanf("%d", &x);
    while(licznik++ < x)
    {
        suma = suma+licznik;
    }
    printf("suma = %d\n", suma);
    return 0;
}