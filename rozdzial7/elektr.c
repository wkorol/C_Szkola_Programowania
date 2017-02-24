//
//  elektr.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#define STAWKA1 0.2401 //stawka dla pierwszych 240kWh
#define STAWKA2 0.2881 //stawka dla nastepnych 300kWh
#define STAWKA3 0.3457 //stawka powyzej 540kWh
#define PROG1 240.0 //pierwszy prog
#define PROG2 540.0 //drugi prog
#define PODSTAWA1 (STAWKA1 * PROG1) //Cena pierwszych 240kWh
#define PODSTAWA2 (PODSTAWA1 + (STAWKA2 * (PROG2 - PROG1))) //Cena pierwszych 540kWh

int main(void)
{
    double kwh; //ilosc zuzytych kilowatogodzin
    double oplata; //ich cena
    printf("Podaj ilosc zuzytych kWh.\n");
    scanf("%lf", &kwh);
    if(kwh <= PROG1)
        oplata = STAWKA1 * kwh;
    else if (kwh<=PROG2) //pomiedzy 240 a 540 kWh
        oplata = PODSTAWA1 + (STAWKA2 * (kwh - PROG1));
    else //ponad 540 kWh
        oplata = PODSTAWA2 + (STAWKA3 * (kwh-PROG2));
    printf("Oplata za %.1f kWh wynosi %1.2f zl.\n", kwh, oplata);
    return 0;
}