//fund1.c -- przekazywanie skladnikow struktury jako argumentow
#include <stdio.h>
#define FUNDDL 50
struct fundusze {
    char bank[FUNDDL];
    double bankfund;
    char oscz[FUNDDL];
    double oszczfund;
};

double suma(double, double);
int main(void)
{
    struct fundusze edek = {
        "Bank Czosnkowo-Melonowy",
        2024.72,
        "Kasa Oszczednosciowo-Pozyczkowa \"Debet\"",
        8237.11
    };
    printf("Edek posiada w sumie %.2f zl.\n", suma(edek.bankfund, edek.oszczfund));
    return 0;
}

//Dodaje dwie liczby typu double
double suma(double x, double y)
{
    return(x+y);
}