
#include <stdio.h>
#define ROZMIAR 4

struct daneos {
    char imie[10];
    char nazwisko[20];
    
};

struct student {
    struct daneos studdane;
    double tab[5];
    float srednia;
};

int main(int argc, const char * argv[]) {
    int i=0;
    int j=0;
    float suma = 0;
    float srednia_all = 0;
    struct student studenci[ROZMIAR] = {
        {
            "Wiktor",
            "Korol"
        },
        {
            "Krzysztof",
            "Kulewski"
        },
        {
            "Krzysztof",
            "Kołecki"
        },
        {
            "Łukasz",
            "Karczewski"
        }
    };
    
    while(i<ROZMIAR)
    {
        printf("Podaj oceny studenta %s %s\n", studenci[i].studdane.imie, studenci[i].studdane.nazwisko);
        printf("Lecimy po kolei:\n");
        for (j=0; j<5; j++) {
            printf("Ocena %d: ", j+1);
            scanf("%lf", &studenci[i].tab[j]);
            suma+=studenci[i].tab[j];
            if(j==4)
            {
                studenci[i].srednia = suma/5;
                suma = 0;
            }
        }
        
        
        i++;
    }
    
    
    //srednia wszystkich studentow
    for(i=0; i<ROZMIAR; i++)
    {
        srednia_all+=studenci[i].srednia;
    }
    
    srednia_all = srednia_all/ROZMIAR;
    
    //Wyswietlenie wszystkich danych
    for (i=0; i<ROZMIAR; i++) {
        printf("Student: %s %s\n", studenci[i].studdane.imie, studenci[i].studdane.nazwisko);
        printf("Oceny: ");
        for (j=0; j<5; j++) {
            printf("%.2f ", studenci[i].tab[j]);
        }
        putchar('\n');
        printf("Średnia ocen studenta: %.2lf\n", studenci[i].srednia);
        printf("\n\n-----------------------------------\n\n");
    }
    
    printf("Średnia ocen wszystkich studentów: %.2lf\n", srednia_all);
    
    
    return 0;
}
