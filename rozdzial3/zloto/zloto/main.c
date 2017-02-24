//zloto.c - wartosc Twojego ciezaru w zlocie
#include <stdio.h>
int main()
{
    float ciezar; // ciezar uzytkownika
    float wartosc; //wartosc uzytkownika w zlocie
    
    printf("Czy jestes wart tyle co Twoj ciezar w zlocie?\n");
    printf("Sprawdzmy\n");
    printf("Podaj swoj ciezar w kilogramach: ");
    
    //pobranie danych od uzytkownika
    scanf("%f", &ciezar);
    
    //zakladamy ze cena zlota wynosi 1280 zlotych za uncje
    //32.151 to przelicznik kilograma na uncje troy
    wartosc = 1280.0 * ciezar * 32.151;
    
    printf("Twoj ciezar w zlocie jest wart %.2f zl\n", wartosc);
    printf("Z pewnoscia jestes tyle wart! w razie spadku cen zlota\n");
    printf("jedz wiecej, aby utrzymac swoja wartosc.\n");
    return 0;
}