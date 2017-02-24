//
//  cwiczenie7.c
//  
//
//  Created by Wiktor Korol on 03.08.2015.
//
//

#include <stdio.h>
#define WYN 40
#define NADG 1.5*WYN
#define PROG1 0.15
#define PROG2 0.2
#define PROG3 0.25

int main()
{
    int godziny;
    float wynagrodzenie_brutto;
    float podatek;
    float wynagrodzenie_netto;
    float reszta;
    
    printf("Wprowadz liczbe godzin pzepracowanych w tygodniu\n");
    scanf("%d", &godziny);
    
    if(godziny>40 && godziny<24*7)
    {
        wynagrodzenie_netto = 40*WYN + (godziny-40)*NADG;
        if(wynagrodzenie_netto - 1200 <= 600)
        {
            podatek = (1200*PROG1) + (wynagrodzenie_netto - 1200) * PROG2;
            wynagrodzenie_brutto = wynagrodzenie_netto + podatek;
            printf("Brutto: %.2f, netto %.2f, podatek %.2f\n", wynagrodzenie_brutto, wynagrodzenie_netto, podatek);
        }
        else
        {
            reszta = wynagrodzenie_netto - 1800;
            podatek = (1200*PROG1) + 600 * PROG2 + reszta * PROG3;
            wynagrodzenie_brutto = wynagrodzenie_netto + podatek;
            printf("Brutto: %.2f, netto %.2f, podatek %.2f\n", wynagrodzenie_brutto, wynagrodzenie_netto, podatek);
        }
        
    }
    else if(godziny<=40)
    {
        wynagrodzenie_netto = WYN*godziny;
        podatek = wynagrodzenie_netto * PROG1;
        wynagrodzenie_brutto = wynagrodzenie_netto + podatek;
        printf("Brutto: %.2f, netto %.2f, podatek %.2f\n", wynagrodzenie_brutto, wynagrodzenie_netto, podatek);
    }
        
    else
        printf("Tyle godzin na pewno nie przepracowales w ciagu tygodnia!\n");
    
    
    
    
    
    return 0;
}