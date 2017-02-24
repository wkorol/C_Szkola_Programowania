//kolejka.h -- interfejs dla kolejki
#ifndef _KOLEJKA_H_
#define _KOLEJKA_H_
#include <stdbool.h>
#define MAXKOLEJKA 10
//tutaj wstaw definicje typu pozycja
typedef struct pozycja {
    long przybycie; //czas wejscia klienta do kolejki
    int czaskons; //liczba zadanych minut konsultacji
}Pozycja;

typedef struct wezel
{
    Pozycja pozycja;
    struct wezel * nast;
}Wezel;
typedef struct kolejka
{
    Wezel * przod; //wskaznij do przodu kolejki
    Wezel * tyl; //wskaznij do tylu kolejki
    int pozycje;
}Kolejka;

//Dzialanie inicjalizuje kolejke
//warunek wstepny: wk wskazuje na kolejke
//warunek koncowy: kolejka zostaje zainicjalizowana jako pusta
void InicjujKolejke(Kolejka * wk);

//Dzialanie sprawdza czy kolejka jest pelna
//warunek wstepny: wk wskazuje na wczesniej zainicjowana kolejke
//zwraca true jesli kolejka jest pelna, w przeciwnym wypadku false
bool PelnaKolejka(const Kolejka * wk);

//Dzialanie: sprawdza czy kolejka jest pusta
//warunek wstepny: wk wskazuje na zainicjowana kolejke
//warunek koncowy: zwraca true jesli kolejka jest pusta, w przeciwnym wypadku - false
bool PustaKolejka(const Kolejka *wk);

//Dzialanie: Okresla liczbe pozycji w kolejce
//Warunek wstepny: wk wskazuje na wczesniej zainicjowana kolejke
//warunek koncowy: zwraca liczbe pozycji w kolejce
int LiczbaPozycji(const Kolejka * wk);

//Dzialanie ustawia pozycje z tylu koljeki
//Warunek wstepny: wk wskazuje na wczesniej zainicjowana kolejke
//warunek koncowy: Jesli kolejka nie jest pusta, pozycja zostaje umieszczona z tylu kolejki
//                 a funkcja zwraca true, w przeciwnym wypadku kolejka pozostaje niezmieniona, a funkcja zwraca false
bool Ustaw(Pozycja pozycja, Kolejka *wk);

//Dzialanie: odlacza pozycje z przodu kolejki
//warunek wstepny: wk wskazuje na wczesniej zainicjowana kolejke
//warunek koncowy: jesli kolejka nie jest pusta, pozycja z przodu kolejki
//                 zostaje skopiowana do *wpozycja i usunieta z kolejki, a funkcja
//                 zwraca true. Jesli usunieto ostatnia pozycje, kolejka jest zerowana inicjowana.
//                 jesli kolejka byla pusta juz wczesniej, pozostaje ona bez zmian, afunkcja zwraca false
bool Odlacz(Pozycja *wpozycja, Kolejka *wk);
#endif