//podwdol.c -- dwukrotnie dolacza plik naglowkowy
#include <stdio.h>
#include "nazwy.h"
#include "nazwy.h" //przypadkowe drugie dolaczenie
int main()
{
    daneos zwyciezca = {"Less", "Ismoor"};
    printf("Zwyciezca jest %s %s.\n", zwyciezca.imie, zwyciezca.nazwisko);
    return 0;
    
}