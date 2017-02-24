//fund2.c -- przekazywanie wskaznika do struktury
#include <stdio.h>
#define FUNDDL 50
struct fundusze {
    char bank[FUNDDL];
    double bankfund;
    char oszcz[FUNDDL];
    double oszczfund;
};

double suma(const struct fundusze *); //argument jest wskaznikiem
int main(void)
{
    struct fundusze edek  = {
        "Bank Czosnkowo-Melonowy",
        2024.72,
        "Kasa Oszczednosciowo-Pozyczkowa \"Debet\"",
        8237.11
    };
    printf("Edek posiada w sumie %.2f zl.\n", suma(&edek));
    return 0;
    
}

double suma(const struct fundusze * pieniadze)
{
    return(pieniadze->bankfund + pieniadze->oszczfund);
}