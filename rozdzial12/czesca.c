#include <stdio.h>
void podaj_liczbe();
void sumuj(int k);
int liczba = 0;
int main(void)
{
    int wartosc;
    register int i;
    // zasieg plikowy, lacznosc zewnetrzna
    // zmienna automatyczna
    // zmienna rejestrowa
    printf("Podaj dodatnia liczbe calkowita (0 to koniec): ");
    while (scanf("%d", &wartosc) == 1 && wartosc > 0)
    {
        ++liczba;       // zmienna o zasiegu plikowym
        for (i = wartosc; i >= 0; i--)
            sumuj(i);
        printf("Podaj dodatnia liczbe calkowita (0 to koniec): ");
    }
    podaj_liczbe();
    return 0;

}

void podaj_liczbe()
{
    printf("Petle opuszczono po %d cyklach\n", liczba);
}