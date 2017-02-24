//enum.c -- uzycie wartosci wyliczeniowych
#include <stdio.h>
#include <string.h> //potrzebna funkcja strcmp()
#include <stdbool.h> //nowosc C99
enum widmo {czerwony, pomaranczowy, zolty, zielony, niebieski, fioletowy};
const char * kolory[] = {"czerwony", "pomaranczowy", "zolty", "zielony", "niebieski", "fioletowy"};

#define DLUGOSC 30
int main(void)
{
    char wybor[DLUGOSC];
    enum widmo kolor;
    bool kolor_znaleziony = false;
    puts("Podaj kolor (pusta linia - koniec):");
    while (gets(wybor) != NULL && wybor[0] != '\0') {
        for (kolor = czerwony; kolor <= fioletowy; kolor++) {
            if (strcmp(wybor, kolory[kolor]) == 0) {
                kolor_znaleziony = true;
                break;
            }
        }
        
        if (kolor_znaleziony) {
            switch (kolor) {
                case czerwony:
                    puts("Roze sa czerwone.");
                    break;
                case pomaranczowy:
                    puts("Maki sa pomaranczowe.");
                    break;
                case zolty:
                    puts("Sloneczniki sa zolte");
                    break;
                case zielony:
                    puts("Trawa jest zielona");
                    break;
                case niebieski:
                    puts("Dzwonki sa niebieskie.");
                    break;
                case fioletowy:
                    puts("Fiolki sa fioletowe.");
                    break;
            }
            
        }
        else
            printf("Nie wiem nic o kolorze %s.\n", wybor);
        kolor_znaleziony = false;
        puts("Podaj nastepny kolor, prosze (pusta linia - koniec)");
        
        
        
    }
    
    puts("Do widzenia!");
    return 0;
}