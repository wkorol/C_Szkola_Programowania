//znajom.c -- wykorzystuje wskaznik do struktury
#include <stdio.h>
#define DL 20
struct daneos {
    char imie[DL];
    char nazw[DL];
};

struct facet {
    struct daneos person;
    char ulub_jedz[DL];
    char zawod[DL];
    float dochody;
};

int main(void)
{
    struct facet gosc[2] = {
        {{"Chip", "Hyperlink"},
        "talerz chipsow",
        "trener osobisty",
        36827.00
    },
        {{"Norbert", "Brzuchacz"},
            "mus lososiowy",
            "redaktor brukowca",
            148500.00
        }
    };
    
    struct facet * on; //oto wskaznik do struktury
    printf("adres #1: %p #2: %p\n", on, on+1);
    on = &gosc[0]; //ustawia wskaznik
    printf("on->dochody ma wartosc %.2f $: (*on).dochody ma wartosc %.2f $\n", on->dochody, (*on).dochody);
    on++; //wskazuje na nastepna strukture
    printf("on->ulub_jedz ma wartosc %s: on->person.nazw ma wartosc %s\n", on->ulub_jedz, on->person.nazw);
    
}