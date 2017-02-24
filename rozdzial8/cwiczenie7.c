//
//  cwiczenie8.c
//
//
//  Created by Wiktor Korol on 23.08.2015.
//
//

#include <stdio.h>
int main()
#define WYN1 35
#define WYN2 37
#define WYN3 40
#define WYN4 45
#define NADG 1.5*WYN
#define PROG1 0.15
#define PROG2 0.2
#define PROG3 0.25
{
    
    char menu;
    int WYN;
    int godziny = 0;
    float wynagrodzenie_brutto;
    float podatek;
    float wynagrodzenie_netto;
    float reszta;
    
    printf("******************************************************************\n");
    printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
    printf("a) 35 zl/godz.                                   b) 37 zl/godz.\n");
    printf("c) 40 zl/godz.                                   d) 45 zl/godz.\n");
    printf("e) wyjscie\n");
    printf("******************************************************************\n");
    
    while(scanf("%c", &menu))
    {
        switch (menu) {
            case 'a':
                WYN = WYN1;
                printf("Wprowadz liczbe godzin pzepracowanych w tygodniu\n");
                scanf("%d", &godziny);
                break;
            case 'b':
                WYN = WYN2;
                printf("Wprowadz liczbe godzin pzepracowanych w tygodniu\n");
                scanf("%d", &godziny);
                break;
                
            case 'c':
                WYN = WYN3;
                printf("Wprowadz liczbe godzin pzepracowanych w tygodniu\n");
                scanf("%d", &godziny);
                break;
                
            case 'd':
                WYN = WYN4;
                printf("Wprowadz liczbe godzin pzepracowanych w tygodniu\n");
                scanf("%d", &godziny);
                break;
            case 'e':
                printf("Koniec! Wyszedles z programu\n");
                break;
            default:
                printf("Podales nieprawidlowa liczbe, wybierz ponownie cyfre od 1 do 5\n\n");
                printf("******************************************************************\n");
                printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
                printf("a) 35 zl/godz.                                   b) 37 zl/godz.\n");
                printf("c) 40 zl/godz.                                   d) 45 zl/godz.\n");
                printf("e) wyjscie\n");
                printf("******************************************************************\n");
                continue;
                
        }
        break;
        
        
    }
    
    if(godziny > 0)
    {
        
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
        
    }
    
    return 0;
}