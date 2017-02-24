//daneos.h -- plik naglowkowy struktury nazwiska
//stale
#define DL_LAN 32
//deklaracje struktur
struct daneos_st {
    char imie[DL_LAN];
    char nazw[DL_LAN];
};

typedef struct daneos_st daneos;
//prototypy funkcji
void wprowadz(daneos *);
void wyswietl(const daneos *);