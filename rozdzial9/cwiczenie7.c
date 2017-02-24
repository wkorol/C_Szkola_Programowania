//
//  cwiczenie7.c
//  
//
//  Created by Wiktor Korol on 10.10.2015.
//
//

#include <stdio.h>

double potega(double a, double b);

double a, b, pot;
int main()
{
    printf("Wprowadź liczbę: ");
    scanf("%lf", &a);
    printf("Do jakiej potegi chcesz podniesc liczbe %.lf? ", a);
    scanf("%lf", &b);
    
    pot = potega(a,b);
    
    printf("Liczba %.lf podniesiona do potegi %.lf wynosi %lf\n", a, b, pot);
    
    return 0;
}




double potega(double a, double b) //potega() zwraca typ double
{
    double pot = 1;
    int i;
    
    if(a==0)
    {
        pot = 0;
        return pot;
    }
    
    if(b>0)
    {
    for(i=1; i<=b; i++)
        pot*=a;
    }
    
    if(b==0)
            pot = 1;
    else
    {
        for(i=1; i<=-b; i++)
            pot*=a;
        pot = 1/pot;
    }
    
    return pot;     //zwracamy wartosc zmiennej pot
}