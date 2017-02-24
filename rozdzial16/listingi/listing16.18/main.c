//varargs -- uzycie zmiennej liczby argumentow
#include <stdio.h>
#include <stdarg.h>
double sumuj(int, ...);
int main(void)
{
    double s,t;
    s = sumuj(3,1.1,2.5,13.3);
    t = sumuj(6,1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
    printf("zwroc wartosc suma(3, 1.1, 2.5, 13.3): %g\n", s);
    printf("zwroc wartosc suma(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1): %g\n", t);
    return 0;
}
double sumuj(int lim, ...)
{
    va_list ap;
    //deklaracja obiektu przechowujacego argumenty
    double suma = 0;
    int i;
    va_start(ap, lim);
    //zainicjowanie ap lista argumentow
    for (i=0; i < lim; i++) {
        suma+= va_arg(ap, double);
    }
    //dostep do kazdego elementu w liscie argumentow
    va_end(ap); //czyszczenie
    
    return suma;
}