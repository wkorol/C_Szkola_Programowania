//nazwy.h -- zastosowanie dyrektywy ifndef
#ifndef NAZWY_H_
#define NAZWY_H_
//stale
#define DL_LAN 32
//deklaracje struktur
struct daneos_st
{
    char imie[DL_LAN];
    char nazwisko[DL_LAN];
};

//typedef
typedef struct daneos_st daneos;
//prototypy funkcji
void wprowadz(daneos *);
void wyswietl(const daneos *);
#endif
