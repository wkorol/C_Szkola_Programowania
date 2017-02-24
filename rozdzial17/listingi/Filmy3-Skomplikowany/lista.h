//lista.h -- plik naglowkowy dla typu "prosta lista"
#ifndef _LISTA_H_
#define _LISTA_H_
#include <stdbool.h>
#define ROZT 45
struct film {
    char tytul[ROZT];
    int ocena;
};

//Ogolne definicje typow
typedef struct film Pozycja;
typedef struct wezel {
    Pozycja pozycja;
    struct wezel * nast;
}Wezel;
typedef Wezel * Lista;
//Prototypy funkcji

//Działanie: inicjalizuje liste
//warunki wstepne: wlista wskazuje na liste
//warunki koncowe: lista zostaje zainicjalizowana jako pusta
void InicjujListe(Lista * wlista);

//Działanie: Okresla, czy lista jest pusta
//warunki wstepne: wlista wskazuje na zainicjalizowana liste
//waruki koncowe: funkcja zwraca true jesli lista jes tpusta, w przeciwnym wypadku false
bool PustaLista(const Lista * wlista);

//Działanie: Okresla czy lista jest pelna
//warunki wstepne: wlista wskazuje na zainicjalizowana liste
//warunki koncowe: funkcja zwraca true jesli lista jest pelna a w przeciwnym wypadku false
bool PelnaLista(const Lista * wlista);

//Dzialanie: Okresla liczbe pozycji w liscie
//warunki wstepne: wlista wskazuje na zainicjalizowana liste
//warunki koncowe: funkcja zwraca liczbe pozycji w liscie
unsigned int LiczbaPozycji(const Lista * wlista);

//Działanie: dodaje pozycje na koncu listy
//warunki wstepne: pozycja jest pozycja do dodania
//                 wlista wskazuje na zainicjalizowana liste
//warunki koncowe: jesli jest to mozliwe funkcja dodaje pozycje na koncu listy
//                 i zwraca true, a w przeciwnym wypadku false
bool DodajPozycje(Pozycja pozycja, Lista * wlista);

//Działanie: stosuje funkcje do kazdej pozycji w liscie
//warunki wstepne: wlista wskazuje na zainicjalizowana liste
//                 wfun wskazuje na funkcje, ktora pobiera
//                 argument typu Pozycja i nie ma wartosci zwracanej
//warunki koncowe: funkcja wskazywana przez wfun jest uruchamiana jeden raz dla kazdej pozycji w liscie
void Przejdz(const Lista * wlista, void (*wfun)(Pozycja pozycja));

//Dzialanie: zwalnia pamiec zajmowana przez liste
//warunki wstepne: wlista wskazuej na zainicjalizowana liste
//warunki koncowe: pamiec zostaje zwolniona, wlista ma wartosc NULL
void CzyscListe(Lista * wlista);
#endif

