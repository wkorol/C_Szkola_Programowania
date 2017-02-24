// znajom.c -- przyklad wykorzystania struktury zagniezdzonej
#include <stdio.h>
#define DL 20
const char * teksty[5] = {
    "   Dziekuje za cudowny wieczor, ",
    "Nie przypuszczalam, ze ",
    "moze byc tak wspanialym facetem. Musimy umowic sie",
    "na pyszny ",
    " i spedzic ze soba kilka milych chwil"
};


// pierwszy szablon
struct daneos {
    char imie[DL];
    char nazw[DL];
};

struct facet {
    struct daneos person; //struktura zagniezdzona
    char ulub_jedz[DL];
    char zawod[DL];
    float dochody;
};

int main()
{
    struct facet gosc = {
        {"Chip", "Hyperlink"},
        "talerz chipsow",
        "trener osobisty",
        36827.00
        
    };
    
    printf("%s - moj drogi, \n\n", gosc.person.imie);
    printf("%s%s.\n", teksty[0], gosc.person.imie);
    printf("%s%s\n", teksty[1], gosc.zawod);
    printf("%s\n", teksty[2]);
    printf("%s%s%s", teksty[3], gosc.ulub_jedz, teksty[4]);
    if(gosc.dochody > 150000.0)
        puts("!!");
    else if (gosc.dochody > 75000.0)
        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n", " ", "Do zobaczenia wkrotce,");
    printf("%40s%s\n", " ", "Szalala");
    
    
    
}
    