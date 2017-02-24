//lista.c -- funkcje realizujace operacje na liscie
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

//funkcje lokalne
static void KopiujDoWezla(Pozycja pozycja, Wezel * wwezel);

//funkcje interfejsu
//inicjalizuje liste jako pusta
void InicjujListe(Lista *wlista)
{
    *wlista = NULL;
}

//Zwraca prawde jesli lista jest pusta
bool PustaLista(const Lista * wlista)
{
    if (*wlista == NULL)
        return true;
    else
        return false;
}

//zwraca prawde jesli lista jest pelna
bool PelnaLista(const Lista * wlista)
{
    Wezel *wsk;
    bool full;
    wsk = (Wezel *) malloc(sizeof(Wezel));
    if(wsk == NULL)
        full = true;
    else
        full = false;
    free(wsk);
    return full;
}

//Zwraca liczbe wezlow
unsigned int LiczbaPozycji(const Lista * wlista)
{
    unsigned int licznik = 0;
    Wezel * w = *wlista; //ustawia na poczatek listy
    while (w!=NULL) {
        ++licznik;
        w=w->nast; //sprawie ze wskazuje na nastepny wezel
    }
    return licznik;
}

//Tworzy wezel przechowujacy pozycje i dodaje na koncu
//listy wskazywanej przez wlista (wolna implementacja)
bool DodajPozycje(Pozycja pozycja, Lista * wlista) {
    Wezel * wnowy;
    Wezel * szuk = *wlista;
    wnowy = (Wezel *) malloc(sizeof(Wezel));
    if(wnowy == NULL)
        return false; //Konczy funkcje w razie niepowodzenia
    KopiujDoWezla(pozycja, wnowy);
    wnowy->nast = NULL;
    if(szuk == NULL) //lista jest pusta wnowy nalezy wiec umiescic na poczatku
    {
        *wlista = wnowy;
    }
    else
    {
        while(szuk->nast != NULL)
            szuk=szuk->nast; //znajduje koniec listy
        szuk->nast = wnowy; //dodaje na koncu listy
    }
    return true;
}
void Przejdz(const Lista * wlista, void (*wfun)(Pozycja pozycja))
{
    Wezel * wsk = *wlista;
    while (wsk!= NULL) {
        (*wfun)(wsk->pozycja); //stosuje funkcje do pozycji
        wsk=wsk->nast;
    }
}
//Zwalnia pamiec przydzielona przez malloc() i ustawia wskaznik na NULL
void CzyscListe(Lista * wlista)
{
    Wezel * wsk;
    while (*wlista != NULL) {
        wsk = (*wlista)->nast; //zapisujee adres wezla
        free(*wlista); //zwalnia wezel
        *wlista = wsk; //przechodzi do nastepnego wezla
    }
}

//definicja funkcji lokalnej
//kopiuje element do wezla
static void KopiujDoWezla(Pozycja pozycja, Wezel * wwezel)
{
    wwezel->pozycja = pozycja;
}