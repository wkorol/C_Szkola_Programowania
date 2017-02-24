//
//  uzbool.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main(void)
{
    long num;
    long suma = 0L;
    _Bool wej_jest_ok;
    
    printf("Wprowadz wartosci calkowite do zsumowania ");
    printf("(k - koniec): ");
    wej_jest_ok = (scanf("%ld", &num) == 1);
    while (wej_jest_ok)
    {
        suma = suma + num;
        printf("Podaj nastepna liczbe calkowita (k - koniec): ");
        wej_jest_ok = (scanf("%ld", &num) == 1);
    }
    printf("SUma podanych liczb wynosi: %ld.\n", suma);
    
    return 0;
}