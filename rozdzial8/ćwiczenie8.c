//
//  ćwiczenie8.c
//  
//
//  Created by Wiktor Korol on 13.09.2015.
//
//

#include <stdio.h>
#include <ctype.h>

void dodawanie();
void odejmowanie();
void mnozenie();
void dzielenie();
void wprowadzanie();

int main()
{
    char ch;
    printf("Wybierz jedno z dzialan:\n");
    printf("a. dodawanie           b. odejmowanie\n");
    printf("c. mnozenie            d. dzielenie\n");
    printf("k. koniec\n");
    while((ch = getchar()) != 'k')
    {
        
        switch (ch) {
            case 'a':
                dodawanie();
                break;
            case 'b':
                odejmowanie();
                break;
            case 'c':
                mnozenie();
                break;
            case 'd':
                dzielenie();
                break;
                
            default:
                printf("Wybierz jedno z dzialan:\n");
                printf("a. dodawanie           b. odejmowanie\n");
                printf("c. mnozenie            d. dzielenie\n");
                printf("k. koniec\n");
                break;
        }
    }
    printf("Koniec.\n");
    
    return 0;
}

float wprowadz_1()
{
    float a;
    char ch;
    printf("Wprowadz pierwsza liczbe: ");
    while(scanf("%f", &a) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" nie jest liczba.\n");
        printf("Podaj liczbe, np. 2.5, -178E8 czy 3: ");
    }
    
    return a;
}

float wprowadz_2()
{
    float b;
    char ch;
    printf("Wprowadz druga liczbe: ");
    while(scanf("%f", &b) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" nie jest liczba.\n");
        printf("Podaj liczbe, np. 2.5, -178E8 czy 3: ");
    }
    
    return b;
}


void dodawanie()
{
    float wynik, a, b;
    a = wprowadz_1();
    b = wprowadz_2();
    wynik = a+b;
    printf("%.2f + %.2f = %.2f\n", a, b, wynik);
    
}

void odejmowanie()
{
    float wynik, a, b;
    a = wprowadz_1();
    b = wprowadz_2();
    wynik = a-b;
    printf("%.2f - %.2f = %.2f\n", a, b, wynik);
    
}

void mnozenie()
{
    float wynik, a, b;
    a = wprowadz_1();
    b = wprowadz_2();
    wynik = a*b;
    printf("%.2f * %.2f = %.2f\n", a, b, wynik);
}

void dzielenie()
{
    float wynik, a, b;
    a = wprowadz_1();
    b = wprowadz_2();
    while(b == 0)
    {
        printf("Przy dzieleniu drugą liczbą nie moze byc 0, wprowadz ponownie\n");
        b = wprowadz_2();
    }
    wynik = a/b;
    printf("%.2f / %.2f = %.2f\n", a, b, wynik);
    
}

