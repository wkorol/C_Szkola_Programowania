#include <stdio.h>

#define N 3

struct czlowiek {
    long pesel;
    struct daneos {
        char imie[10];
        char drugieimie[10];
        char nazwisko[20];
    }dane;
};

void wyswietl(struct czlowiek * zbior, int n);

int main(int argc, const char * argv[]) {
    
    
    struct czlowiek zbior[N] = {
        {
            94072007957,
            "Wiktor",
            "Adam",
            "Korol"
        },
        {
            65092301159,
            "Michael",
            "James",
            "Jordan"
        },
        {
            23543645754,
            "Józef",
            "Adam",
            "Korol"
        }
    };
    
    
    wyswietl(zbior, N);
    
    
    return 0;
}

void wyswietl(struct czlowiek * zbior, int n)
{
    int i;
    for (i=0;i<n; i++) {
        printf("%s, %s %c. -- %lu\n", zbior[i].dane.nazwisko, zbior[i].dane.imie, zbior[i].dane.drugieimie[0], zbior[i].pesel);
    }
    
    
}
