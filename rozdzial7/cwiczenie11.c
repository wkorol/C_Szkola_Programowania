//
//  cwiczenie11.c
//  
//
//  Created by Wiktor Korol on 25.08.2015.
//
//

#include <stdio.h>
#define RABAT 0.95
int main()
{
    float arbuzy = 1.25, buraki = 0.65, cebula = 0.89;
    int arbuzy_i=0, buraki_i=0, cebula_i=0;
    int kilogramy_a = 0, kilogramy_b = 0, kilogramy_c = 0;
    int kilogramy = 0;
    float koszt_przesylki = 0;
    float koszt_caly;
    
    
    char zamowienie;
    printf("Witaj w sklepie warzywnym ABC, prosimy zlozyc zamowienie\n");
    printf("A - Zamowienie arbuzow, B - Zamowienie burakow, C - Zamowienie cebuli\n");
    
    while ((scanf("%s", &zamowienie)) == 1 && zamowienie != 'K')
    {
        switch (zamowienie) {
            case 'A':
                printf("Ile kilogramow arbuzow chcesz zamowic?\n");
                scanf("%d", &arbuzy_i);
                kilogramy_a = kilogramy_a + arbuzy_i;
                arbuzy_i = 0;
                printf("Wybierz A, B lub C, lub zakoncz zamowienie K\n");
                break;
            case 'B':
                printf("Ile kilogramow burakow chcesz zamowic?\n");
                scanf("%d", &buraki_i);
                kilogramy_b = kilogramy_b + buraki_i;
                buraki_i = 0;
                printf("Wybierz A, B lub C, lub zakoncz zamowienie K\n");
                break;
            case 'C':
                printf("Ile kilogramow cebuli chcesz zamowic?\n");
                scanf("%d", &cebula_i);
                kilogramy_c = kilogramy_c + cebula_i;
                cebula_i = 0;
                printf("Wybierz A, B lub C, lub zakoncz zamowienie K\n");
                break;
                
            default:
                printf("Nieprawidlowa litera, wprowadz jeszcze raz: A, B, C lub zakoncz K!\n");
                break;
        }
    }
    
    kilogramy = kilogramy_a + kilogramy_b + kilogramy_c;
    
    if(kilogramy > 0)
    {
        koszt_caly = kilogramy_a * arbuzy + kilogramy_b * buraki + kilogramy_c * cebula;
        printf("Twoje zamowienie: %d kg arbuzow, %d kg burakow, %d kg cebuli\n", kilogramy_a, kilogramy_b, kilogramy_c);
        printf("1kg arbuzow - 1.25 zl, 1kg burakow - 0.65 zl, 1kg cebuli - 0.89 zl\n");
        printf("Za arbuzy musisz zaplacic lacznie %.2f zl\n", kilogramy_a * arbuzy);
        printf("Za buraki musisz zaplacic lacznie %.2f zl\n", kilogramy_b * buraki);
        printf("Za cebule musisz zaplacic lacznie %.2f zl\n", kilogramy_c * cebula);
        if(kilogramy <= 5)
            koszt_przesylki = 3.5;
        else if(kilogramy > 5 && kilogramy <= 20)
            koszt_przesylki = 10;
        else
            koszt_przesylki = 8 + (kilogramy - 20) * 0.1;
        printf("Koszt przesylki wynosi %.2f zl\n", koszt_przesylki);
        if (koszt_caly > 100) {
            printf("Przyznano Ci rabat w wysokosci 5%%\n");
            printf("Twoje zamowienie wynioslo %.2f zl, zamiast %.2f zl\n", koszt_caly * RABAT, koszt_caly);
            printf("Lacznie z przesylka musisz zaplacic %.2f\n", koszt_caly*RABAT + koszt_przesylki);
            
        }
        else
            printf("Lacznie musisz zaplacic %.2f zl\n", koszt_caly + koszt_przesylki);
    }
    else
           printf("Nic nie zamowiles\n");
    
    return 0;
}