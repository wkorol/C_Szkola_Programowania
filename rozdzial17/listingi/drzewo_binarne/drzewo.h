//drzewo.h -- drzewo binarne, drzewo nie moze zawierac dwoch jednakowych pozycji
#ifndef _DRZEWO_H_
#define _DRZEWO_H_
#include <stdbool.h>
//Typ pozycja nalezy zdefiniowac w zaleznosci od okolicznosci
typedef struct pozycja {
    char imie[20];
    char gatunek[20];
}Pozycja;
#define MAXPOZ 10
typedef struct wezel {
    Pozycja pozycja;
    struct wezel * lewy; //wskaznik do lewej galezi
    struct wezel * prawy; //wskaznik do prawej galezi
}Wezel;
typedef struct drzewo {
    Wezel * korzen; //wskaznik do korzenia drzewa
    int rozmiar;
}Drzewo;

//prototypy funkcji

//Dzialanie: inicjalizuje drzewo jako puste
//warunki wstepne: wdrzewo wskazuje na drzewo
//warunki koncowe: drzewo zostalo zainicjalizowane
void InicjujDrzewo(Drzewo *wdrzewo);

//Dzialanie: okresla czy drzewo jest puste
//warunki wstepne: wdrzewo wskazuje na drzewo
//warunki koncowe: funkcja zwraca true, jesli drzewo jest puste, a w przeciwnym wypadku - false
bool PusteDrzewo(const Drzewo * wdrzewo);

//Dzialanie: okresla liczbe pozycji w drzewie
//warunki wstepne: wdrzewo wskazuje na drzewo
//warunki koncowe: funkcja zwraca true, jesli drzewo jest pelne, w przeciwnym wypadku false
bool PelneDrzewo(const Drzewo * wdrzewo);

//Dzialanie: okresla liczbe pozycji w drzewie
//warunki wstepne: wdrzewo wskazuje na drzewo
//funkcja zwraa liczbe pozycji w drzewie
int LiczbaPozycji(const Drzewo * wdrzewo);

//Dzialanie: dodaje pozycje do drzewo
//warunki wstepne: wp jest adresem dodawanej pozycji, wdrzewo wskazuje na zainicjowane drzewo
//warunki koncowe: jesli jest to mozliwe, funkcja dodaje pozycje do drzewa i zwraca true, w przeciwnym wypadku false
bool DodajPozycje(const Pozycja * wp, Drzewo * wdrzewo);


//Dzialanie: znajduje pozycje w drzewie
//warunki wstepne: wp wskazuje na pozycje, wdrewo wskazuje na zainicjowane drzewo
//warunki koncowe: funkcja zwraca true, jesli pozycja znajduje sie w drzewie a w przeciwnym wypadku funkcja zwraca false
bool WDrzewie(const Pozycja * wp, const Drzewo * wdrzewo);


//Dzialanie: usuwa pozycje z drzewa
//warunki wstepne: wp jest adresem usuwanej pozycji, wdrzewo wskazuje na zainicjowane drzewo
//warunki koncowe: jesli jest to mozliwe funkcja usuwa pozycje z drzewa i zwraca true, w przcwinym wypadku funkcja zwraca false
bool UsunPozycje(const Pozycja * wp, Drzewo * wdrzewo);

//Dzialanie: stosuje funkcje do kazdej pozycji w drzewie
//warunki wstepne: wdrzewo wskazuje na drzewo, wfun wskazuje na funkcje, ktora przyjmuje argument typu Pozycja i nie posiada wartosci zwracanej
//warunki koncowe: funkcja wskazywana przez wfun zostaje zastosowana jeden raz dla kazdej pozycji w drzewie
void Przejdz(const Drzewo * wdrzewo, void(*Wfun)(Pozycja pozycja));

//dzialanie: usuwa cale drzewo
//warunki wstepne: wdrzewo wskazuje na zainicjowane drzewo
//warunki koncowe: drzewo jest puste
void UsunWszystko(Drzewo * wdrzewo);
#endif



