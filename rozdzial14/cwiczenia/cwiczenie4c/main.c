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

void wyswietl(struct czlowiek zbior);

int main(int argc, const char * argv[]) {
    
    
    struct czlowiek czlowiek1 = {
            94072007957,
            "Wiktor",
            "Adam",
            "Korol"
        
    };
    
    struct czlowiek czlowiek2 =
    {
        65092301159,
        "Michael",
        "James",
        "Jordan"
    };
    
    struct czlowiek czlowiek3 =
    {
        23543645754,
        "Józef",
        "Adam",
        "Korol"
    };
    
    
    wyswietl(czlowiek1);
    wyswietl(czlowiek2);
    wyswietl(czlowiek3);
    
    
    return 0;
}

void wyswietl(struct czlowiek zbior)
{
    
        printf("%s, %s %c. -- %lu\n", zbior.dane.nazwisko, zbior.dane.imie, zbior.dane.drugieimie[0], zbior.pesel);
    
}
