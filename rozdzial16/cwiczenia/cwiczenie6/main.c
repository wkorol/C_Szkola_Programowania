//qsorter.c -- sortuje zbior liczb za pomoca funkcji qsort()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DL_LAN 30
struct osoba {
    char imie[DL_LAN];
    char nazw[DL_LAN];
};
struct osoba personel[5];

void wprowadzdane();
void pokaz_strukt();
int porownaj(const void * w1, const void *w2);
int main(void)
{
    wprowadzdane();
    qsort(personel, 5, sizeof(struct osoba), porownaj);
    puts("\nLista uporzadkowana:");
    pokaz_strukt();
    return 0;
}


void wprowadzdane() {
    
    for (int i = 0; i<5; i++) {
        printf("Imie %d\n", i);
        scanf("%s", personel[i].imie);
        printf("Nazwisko %d\n", i);
        scanf("%s", personel[i].nazw);
    }
    printf("Koniec wprowadzania\n");
    
    
}

void pokaz_strukt()
{
    for (int i=0; i<5; i++) {
        printf("%s %s\n", personel[i].imie, personel[i].nazw);
    }
}



//porzadkuje w kolejnosci rosnacej
int porownaj(const void * w1, const void *w2)
{
    const struct osoba *ws1 = w1;
    const struct osoba *ws2 = w2;
    int wyn;
    wyn = strcmp(ws1->nazw, ws2->nazw);
    if(wyn!=0)
        return wyn;
    else
        return strcmp(ws1->imie, ws2->imie);
}