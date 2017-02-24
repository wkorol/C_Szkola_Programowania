#include <stdio.h>
int main()
{
    int litr = 1000;
    float masa_czasteczki = 3.0*10e-7;
    float objetosc;
    float liczba_czasteczek;
    
    printf("Wprowadz objetosc wody w litrach: \n");
    scanf("%f", &objetosc);
    liczba_czasteczek = objetosc*litr/masa_czasteczki;
    
    printf("Liczba czasteczek wody w tej objetosci wynosi: %.2f\n", liczba_czasteczek);
    return 0;
}