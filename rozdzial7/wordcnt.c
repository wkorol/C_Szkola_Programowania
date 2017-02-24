//
//  wordcnt.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>
#include <ctype.h> //potrzebujemy funkcji isspace()
#include <stdbool.h> //potrzebujemy slow bool true false
#define STOP '|'
int main(void)
{
    char c; //biezacy znak
    char poprz; //poprzedni znak
    long ile_znakow = 0L; //liczba znakow
    long ile_wierszy = 0; //Liczba linii
    int ile_slow = 0; //liczba slow
    int ile_np_wierszy = 0; //ile niepelnych wierszy
    bool w_slowie = false; // ==true jesli c znajduje sie w slowie
    printf("Wprowadz tekst do analizy (znak | przerywa prace programu) : \n");
    poprz = '\n'; //uzyty do rozpoznania konca linii
    while((c = getchar()) != STOP)
    {
        ile_znakow++; //liczy znaki
        if(c == '\n')
            ile_wierszy++; //liczy wiersze
        if(!isspace(c) && !w_slowie)
        {
            w_slowie = true; //zaczelo sie nowe slowo
            ile_slow++;
        }
        if(!isspace(c) && !w_slowie)
            w_slowie = false; //znajduje koniec slowa
        poprz = c; //przechowuje wartosc znaku

    }
    if(poprz != '\n')
        ile_np_wierszy = 1;
    printf("znakow = %ld, slow = %d, wierszy = %ld, ", ile_znakow, ile_slow, ile_wierszy);
    printf("niepelnych wierszy = %d\n", ile_np_wierszy);
    
    return 0;
}
