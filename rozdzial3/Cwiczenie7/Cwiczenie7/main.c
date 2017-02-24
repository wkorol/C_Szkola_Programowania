#include <stdio.h>
int main()
{
    float cal_cm = 2.54;
    float wzrost_cm;
    float wynik_cale;
    
    printf("Wprowadz swoj wzrost w cm: \n");
    scanf("%f", &wzrost_cm);
    
    wynik_cale = wzrost_cm/cal_cm;
    
    printf("Twoj wzrost %.f [cm] w calach wynosi: %.2f\n",wzrost_cm, wynik_cale);

    return 0;
}