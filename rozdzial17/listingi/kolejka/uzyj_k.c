//uzyj_k.c -- program testujacy interfejs typu "kolejka"
#include <stdio.h>
#include "kolejka.h" //definiuje typy kolejka pozycja
int main(void)
{
    Kolejka kol;
    Pozycja tymcz;
    char ch;
    InicjujKolejke(&kol);
    puts("Test interfejsu Kolejka. Wpisz d, aby dodac wartosc, ");
    puts("u, aby usunac wartosc, lub q, aby zakonczyc.");
    while ((ch=getchar())!= 'q') {
        if(ch!= 'd' && ch != 'u') //pomija inne dane wejsciowe
            continue;
        if (ch == 'd') {
            printf("Liczba do dodania: ");
            scanf("%d", &tymcz);
            if (!PelnaKolejka(&kol)) {
                printf("Wstawiam %d do kolejki\n", tymcz);
                Ustaw(tymcz, &kol);
            }
            else
                puts("Kolejka jest pelna!");
            
        }
        else {
            if(PustaKolejka(&kol))
                puts("Nie ma czego usunąć");
            else {
                Odlacz(&tymcz, &kol);
                printf("Usuwam %d z kolejki\n", tymcz);
            }
        }
        printf("%d pozycji w kolejce\n", LiczbaPozycji(&kol));
        puts("Wpisz d, aby dodac, u aby usunac, q, aby zakonczyc:");
    }
    puts("Do widzenia!");
    return 0;
}