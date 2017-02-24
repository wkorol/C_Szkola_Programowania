#include <stdio.h>
int main()
{
    int wiek;
    float przelicznik_s = 3.156*10e7;
    float wiek_sekundy;
    
    printf("Ile masz lat?\n");
    scanf("%d", &wiek);
    
    wiek_sekundy = wiek*przelicznik_s;
    printf("Twoj wiek w sekundach wynosi: %.2f\n", wiek_sekundy);
    return 0;
    
    
}