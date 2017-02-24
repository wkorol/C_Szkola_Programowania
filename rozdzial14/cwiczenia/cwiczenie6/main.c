#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct druzyna {
    int numer;
    char imie[10];
    char nazwisko[20];
    int rzut2pkt;
    int trafienia2pkt;
    int asysty;
    int faule;
    float skutecznosc;
    bool przypisany;
};


int main(int argc, const char * argv[]) {
    int numertemp;
    char imietemp[10];
    char nazwiskotemp[10];
    int rzut2pkttemp;
    int trafienia2pkttemp;
    int asystytemp;
    int fauletemp;
    int i;
    bool dodano = false;
    
    FILE *plik;
    
    struct druzyna koszykarz[19];
    for(i=0;i<19; i++)
    {
        koszykarz[i].przypisany = false;
    }
    
    
    if ((plik = fopen("koszykarze.txt", "r")) == NULL) {
        fputs("Nie mogłem otworzyć pliku\n", stderr);
        exit(1);
    }
    
    while (fscanf(plik, "%d %s %s %d %d %d %d", &numertemp, imietemp, nazwiskotemp, &rzut2pkttemp, &trafienia2pkttemp, &asystytemp, &fauletemp) == 7) {
        if (koszykarz[numertemp].przypisany == false && numertemp >= 0 && numertemp <= 18) {
            koszykarz[numertemp].numer = numertemp;
            strcpy(koszykarz[numertemp].imie, imietemp);
            strcpy(koszykarz[numertemp].nazwisko, nazwiskotemp);
            koszykarz[numertemp].rzut2pkt = rzut2pkttemp;
            koszykarz[numertemp].trafienia2pkt = trafienia2pkttemp;
            koszykarz[numertemp].asysty = asystytemp;
            koszykarz[numertemp].faule = fauletemp;
            koszykarz[numertemp].przypisany = true;
            }
        else
        {
            for(i=0; i<19;i++)
            {
                if(koszykarz[numertemp].przypisany == true && koszykarz[i].numer == numertemp && strcmp(koszykarz[i].imie, imietemp) == 0 && strcmp(koszykarz[i].nazwisko, nazwiskotemp) == 0)
                {
                    koszykarz[numertemp].rzut2pkt += rzut2pkttemp;
                    koszykarz[numertemp].trafienia2pkt += trafienia2pkttemp;
                    koszykarz[numertemp].asysty += asystytemp;
                    koszykarz[numertemp].faule += fauletemp;
                    printf("Dodano statystyki z innego meczu gracza %s %s\n", koszykarz[numertemp].imie, koszykarz[numertemp].nazwisko);
                    dodano = true;
                }
                    
            }
            
            if (dodano == false) {
                printf("Błąd w przypisanu koszykarza %s %s\n", imietemp, nazwiskotemp);
            }
            dodano = false;
        }
    }
    
    //Obliczanie skuteczności graczy + Drukowanie
    i = 0;
    while (i<19) {
        if(koszykarz[i].przypisany == true)
        {
            koszykarz[i].skutecznosc = (float)koszykarz[i].trafienia2pkt/koszykarz[i].rzut2pkt*100;
            printf("\nKoszykarz: %s %s, nr. %d\n", koszykarz[i].imie, koszykarz[i].nazwisko, koszykarz[i].numer);
            printf("Liczba rzutow za 2 pkt: %d\n", koszykarz[i].rzut2pkt);
            printf("Liczba trafień za 2 pkt: %d\n", koszykarz[i].trafienia2pkt);
            printf("Liczba asyst: %d\n", koszykarz[i].asysty);
            printf("Liczba fauli: %d\n", koszykarz[i].faule);
            printf("Skuteczność gracza: %.2f%%\n\n", koszykarz[i].skutecznosc);
            
            
        }
        
        
        i++;
    }
    
    return 0;
    
}
