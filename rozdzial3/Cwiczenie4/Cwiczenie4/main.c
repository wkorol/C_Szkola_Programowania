#include <stdio.h>
int main()
{
    float liczba;
    printf("Wprowadz liczbe zmiennoprzecinkowa: \n");
    scanf("%f", &liczba);
    printf("Liczba w postaci ulamka dziesietnego: %f, liczba w postaci wykladniczej %e\n", liczba, liczba);
    return 0;
}