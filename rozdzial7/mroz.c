//
//  mroz.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#define SKALA "Celsjusza"
#define MROZ 0
int main(void)
{
    float temperatura;
    int mrozne_dni = 0;
    int wszystkie_dni = 0;
    printf("Podaj liste najnizszych temperatur dnia.\n");
    printf("Uzyj skali %s. Aby zakonczyc, wpisz q.\n", SKALA);
    while(scanf("%f", &temperatura) == 1)
    {
        wszystkie_dni++;
        if(temperatura < MROZ)
            mrozne_dni++;
    }
    if (wszystkie_dni != 0)
        printf("Calkowita liczba dni: %d, z czego %.1f%% bylo mrozne.\n", wszystkie_dni, 100.0* (float) mrozne_dni / wszystkie_dni);
    if (wszystkie_dni == 0)
        printf("Nie wpisano danych!\n");
    return 0;
}
