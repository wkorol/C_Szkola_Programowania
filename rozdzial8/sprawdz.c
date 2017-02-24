//
//  sprawdz.c
//  
//
//  Created by Wiktor Korol on 27.08.2015.
//
//

#include <stdio.h>
#include <stdbool.h>
//sprawdz czy wejscie liczba jest calkowita
int pobierz_int(void);
//sprawdz prawidlowosc podanych granic zakresu
bool zle_granice(int poczatek, int koniec, int dolna, int gorna);
//oblicz sunme kwadratow liczb calkowitych z zakresu od a do b
double suma_kwadr(int a, int b);
int main(void)
{
    const int MIN = -1000;
    const int MAX = +1000;
    int start;
    int stop;
    double wynik;
    
    printf("Program oblicza sume kwadratow liczb calkowitych.\n"
           "Dolna granica przedzialu nie powinna byc "
           "mniejsza od -1000.\n"
           "Gorna granica nie powinna przekraczac +1000.\n"
           "Podaj granice przedzialu"
           "(Podanie 0 dla obu oznacza koniec).\nDolna granica:");
    start = pobierz_int();
    printf("Gorna granica: ");
    stop = pobierz_int();
    while (start != 0 || stop != 0)
    {
        if(zle_granice(start, stop, MIN, MAX))
            printf("Sproboj ponownie.\n");
        else
        {
            wynik = suma_kwadr(start, stop);
            printf("Suma kwadratow liczb calkowitych ");
            printf("w przedziale od %d do %d wynosi %g\n", start, stop, wynik);
        }
        printf("Podaj granice przedzialu (podanie 0 dla obu oznacza koniec)\n");
        printf("Dolna granica: ");
        start = pobierz_int();
        printf("Gorna granica: ");
        stop = pobierz_int();
    
    }
    printf("Koniec.\n");
    
    return 0;
}


int pobierz_int(void)
{
    int we;
    char ch;
    while(scanf("%d", &we) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch); // pomija bledne dane wejsciowe
        printf(" nie jest liczba calkowita.\n Prosze podac ");
        printf("wartosc calkowita, np. 25, -178 czy 3: ");
    }
    return we;
}

double suma_kwadr(int a, int b)
{
    double suma = 0;
    int i;
    
    for(i = a; i <= b; i++)
        suma+= i*i;
    return suma;
}

bool zle_granice(int poczatek, int koniec, int dolna, int gorna)
{
    bool zle = false;
    if(poczatek > koniec)
    {
        printf("%d nie jest mniejsze od %d.\n", poczatek, koniec);
        zle = true;
    }
    if(poczatek < dolna || koniec < dolna)
    {
        printf("Wartosci musza miec wartosc co najmniej: %d.\n", dolna);
        zle = true;
    }
    if (poczatek > gorna || koniec > gorna)
    {
        printf("Wartosci musza miec wartosc co najwyej %d.\n", gorna);
        zle = true;
    }
    
    return zle;

    
}

