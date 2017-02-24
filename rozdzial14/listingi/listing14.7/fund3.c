//fund3.c -- przekazywanie struktury
#include <stdio.h>
#define FUNDDL 50
struct fundusze {
    char bank[FUNDDL];
    double bankfund;
    char oszcz[FUNDDL];
    double oszczfund;
};

double suma(struct fundusze mamona); //argument jest struktura
int main(void)
{
    struct fundusze edek = {
        "Bank Czosnkowo-Melonowy",
        2024.72,
        "Kasa Oszczednosciowo-Pozyczkowa \"Debet\"",
        8237.11
    };
    printf("Edek posiada w sumie %.2f zl.\n", suma(edek));
    return 0;
    
}

double suma(struct fundusze mamona)
{
    return(mamona.bankfund + mamona.oszczfund);
}