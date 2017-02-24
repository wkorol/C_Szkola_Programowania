//
//  pszenica.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define POLA 64
#define PLON 9E14 //Roczna produkcja psznicy w USA (W ziarniach)
int main(void)
{
double biezace, suma;
int licznik = 1;

printf("pole    dodane ziarna    suma ziaren    ");
printf("czesc rocznej\n");
printf("                                        ");
printf("produkcji w USA\n");
suma = biezace = 1.0; //zaczynamy od jednego ziarna
printf("%3d %15.2e %14.2e %14.2e\n", licznik, biezace, suma, suma/PLON);
while (licznik<POLA)
{
    licznik = licznik + 1;
    biezace = 2.0 * biezace; //Podwojna liczba ziaren na nastepnym polu
    suma = suma+biezace;
    printf("%3d %15.2e %14.2e %14.2e\n", licznik, biezace, suma, suma/PLON);
}
return 0;
}