#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define MAXP 12

struct samolot {
    int id;
    bool zajete;
    bool skasuj;
    char imie[10];
    char nazwisko[20];
    
};
char pobierzodp();
int countempty(struct samolot *);
void showempty (struct samolot *);
void alphabetlist (struct samolot *);
void rezerwacja (struct samolot *);
void wyswietlmenu();
void usun_enter();
void delete_rezerwacja (struct samolot *);
void wybierzfunkcje (char odp, struct samolot *);




int main(int argc, const char * argv[]) {
    
    int i;
    char odp;
    struct samolot pasazerwczytaj[MAXP], pasazerzapisz[MAXP];
    
    FILE *save;
    
    if((save = fopen("rezerwacje.dat", "rb")) == NULL)
    {
        printf("Plik nie istnieje, tworzymy nowy\n");
        save = fopen("rezerwacje.dat", "wb");
    
    }
    
    int rozmiar = sizeof(struct samolot);
    
    //Przypisanie id miejsc
    for(i=1; i<=MAXP; i++)
    {
        pasazerwczytaj[i-1].id = i;
        pasazerzapisz[i-1].id = i;
    }
    
    //Przypisanie statusu
    for(i=0; i<MAXP; i++)
    {
        pasazerwczytaj[i].zajete = false;
        pasazerwczytaj[i].skasuj = false;
    }
    
    
    rewind(save); //Przejscie na poczatek pliku
    fread(pasazerwczytaj, rozmiar, MAXP, save);
    
    wyswietlmenu();
    while((odp = pobierzodp()) != 'f')
    {
        wybierzfunkcje(odp, pasazerwczytaj);
        wyswietlmenu();
    }
    
    
    fclose(save);
    
    
    
    
    
    save = fopen("rezerwacje.dat", "wb");
    
    
    //Przygotowanie struktury do zapisania
    for(i=0; i<MAXP; i++)
    {
            if(pasazerwczytaj[i].zajete == true)
            {
                strcpy(pasazerzapisz[i].imie, pasazerwczytaj[i].imie);
                strcpy(pasazerzapisz[i].nazwisko, pasazerwczytaj[i].nazwisko);
                pasazerzapisz[i].zajete = true;
            }
    }

    //Zapisanie struktury do pliku
    fwrite(pasazerzapisz, rozmiar, MAXP, save);
    fclose(save);
    
    
    
    
    return 0;
}


void wyswietlmenu()
{
    puts("Aby wybrac opcje, wpisz jej oznaczenie literowe:");
    puts("a) Pokaz liczbe pustych miejsc");
    puts("b) Pokaz liste pustych miejsc");
    puts("c) Pokaz alfabetyczna liczbe miejsc");
    puts("d) Zarezerwuj miejsce dla klienta");
    puts("e) Usun rezerwacje miejsca");
    puts("f) Koniec");
}

char pobierzodp ()
{
    char odp;
    
    printf("Wprowadź (a-f)\n");
    scanf("%c", &odp);
    usun_enter();
    
    while (strchr("abcdef", odp) == 0) {
        printf("Wprowadziłeś nieprawidłową opcję, wprowadź ponownie (a-f)\n");
        scanf("%c", &odp);
        usun_enter();
    }
    
    
    
    return odp;
}

void wybierzfunkcje (char odp, struct samolot *pasazerwczytaj)
{
    switch (odp) {
        case 'a':
            printf("Liczba pustych miejsc: %d\n", countempty(pasazerwczytaj));
            break;
        case 'b':
            showempty(pasazerwczytaj);
            break;
        case 'c':
            alphabetlist(pasazerwczytaj);
            break;
        case 'd':
            rezerwacja(pasazerwczytaj);
            break;
        case 'e':
            delete_rezerwacja(pasazerwczytaj);
            break;
        
        
            
            
        default:
            break;
    }
}

int countempty (struct samolot *pasazerwczytaj)
{
    int licznik = 0;
    int i;
    for(i=0;i<MAXP; i++)
    {
        if (pasazerwczytaj[i].zajete == false) {
            licznik++;
        }
    }
    
    
    return licznik;
}

void showempty (struct samolot *pasazerwczytaj)
{
    int i;
    printf("ID Miejsca     Status\n");
    for (i=0; i<MAXP; i++) {
        if(pasazerwczytaj[i].zajete == false)
        {
            printf("%3d            wolne\n", pasazerwczytaj[i].id);
        }
    }
}

void alphabetlist (struct samolot *pasazerwczytaj)
{
    int i;
    int j;
    struct samolot uporzadkowana[MAXP];
    
    for(i=0;i<MAXP; i++)
    {
        uporzadkowana[i] = pasazerwczytaj[i];
    }
    
    char swapimie[50];
    char swapnazwisko[50];
    int swapid;
    bool swapstatus;
    
    printf("Przedstawiamy listę miejsc w porządku alfabetycznym:\n");
    
    for (i = 0; i<MAXP-1; i++) {
        for(j=0;j<MAXP-i-1;j++) {
            if ((strcmp(uporzadkowana[j].nazwisko, uporzadkowana[j+1].nazwisko) > 0)) {
                strcpy(swapimie, uporzadkowana[j].imie);
                strcpy(uporzadkowana[j].imie, uporzadkowana[j+1].imie);
                strcpy(uporzadkowana[j+1].imie, swapimie);
                //nazwisko
                strcpy(swapnazwisko, uporzadkowana[j].nazwisko);
                strcpy(uporzadkowana[j].nazwisko, uporzadkowana[j+1].nazwisko);
                strcpy(uporzadkowana[j+1].nazwisko, swapnazwisko);
                //Wartość
                swapid = uporzadkowana[j].id;
                uporzadkowana[j].id = uporzadkowana[j+1].id;
                uporzadkowana[j+1].id = swapid;
                //Status
                swapstatus = uporzadkowana[j].zajete;
                uporzadkowana[j].zajete = uporzadkowana[j+1].zajete;
                uporzadkowana[j+1].zajete = swapstatus;
            }
        }
        
    }
    

    printf("ID Miejsca     Status\n");
    for(i=0; i<12;i++)
    {
        if(uporzadkowana[i].zajete == true)
        printf("%3d            zajęte przez %s %s\n",uporzadkowana[i].id, uporzadkowana[i].imie, uporzadkowana[i].nazwisko);
    }
    
    
}

void rezerwacja (struct samolot *pasazerwczytaj)
{
    int id;
    char odp;
    int koniec = 0;
    if(countempty(pasazerwczytaj) == 0)
    {
        printf("Wszystkie miejsca są zajęte, aby dokonać nowej rezerwacji\n");
        printf("musisz usunąć jedną z rezerwacji, czy chcesz to zrobić? (t lub n\n)\n");
        scanf("%c", &odp);
        usun_enter();
        while(strchr("tn", odp) == 0)
        {
            printf("Nieprawidłowa odpowiedź, wprowadź jeszcze raz (t lub n)\n");
            scanf("%c", &odp);
            usun_enter();
        }
        if (odp == 't') {
            delete_rezerwacja(pasazerwczytaj);
        }
        else
            koniec = 1;
            
    }
    if(koniec == 0)
    {
        printf("Dokonujemy rezerwacji\n");
        printf("Oto lista pustych miejsc\n");
        showempty(pasazerwczytaj);
        printf("Podaj ID miejsca, na którym chcesz dokonać rezerwacji (0 - koniec)\n");
        scanf("%d", &id);
        usun_enter();
        while (id < 0 || id > 12) {
            printf("Wprowadziłeś wartość nienumeryczną lub wykraczającą poza zakres ID, wprowadź ponownie\n");
            scanf("%d", &id);
            usun_enter();
        }
        while((pasazerwczytaj[id-1].zajete == true && id != 0) || id > 12 || id < 0)
        {
            if(id>12 || id<0)
            {
                printf("Wprowadziłeś wartość nienumeryczną lub wykraczającą poza zakres ID, wprowadź ponownie (0 - koniec)\n");
            }
            else
            printf("Miejsce o tym ID jest już zajęte, wprowadź ponownie\n");
            scanf("%d", &id);
            usun_enter();
        }
        
        
        if(id != 0)
        {
            printf("Imię pasażera: ");
            scanf("%s", pasazerwczytaj[id-1].imie);
            usun_enter();
            printf("Nazwisko pasażera: ");
            scanf("%s", pasazerwczytaj[id-1].nazwisko);
            usun_enter();
            pasazerwczytaj[id-1].zajete = true;
        }
    }
    
    printf("Dziękujemy\n");
    
}

void delete_rezerwacja (struct samolot *pasazerwczytaj)
{
    int i;
    int id;
    printf("ID Miejsca     Status\n");
    for(i=0; i<MAXP; i++)
    {
        if(pasazerwczytaj[i].zajete == true)
            printf("%3d            zajęte przez %s %s\n", pasazerwczytaj[i].id, pasazerwczytaj[i].imie, pasazerwczytaj[i].nazwisko);
    }
    
    printf("Podaj ID miejsca, które chcesz usunąć (0 - koniec)\n");
    scanf("%d", &id);
    usun_enter();
    while (id < 0 || id > 12) {
        printf("Wprowadziłeś wartość nienumeryczną lub wykraczającą poza zakres ID, wprowadź ponownie\n");
        scanf("%d", &id);
        usun_enter();
    }
    while((pasazerwczytaj[id-1].zajete == false && id != 0) || id > 12 || id < 0)
    {
        if(id>12 || id<0)
        {
            printf("Wprowadziłeś wartość nienumeryczną lub wykraczającą poza zakres ID, wprowadź ponownie\n");
        }
        else
            printf("Miejsce o tym ID jest wolne, wprowadź ponownie (0 - koniec)\n");
        scanf("%d", &id);
        usun_enter();
    }
    
    if(id > 0 && id <=12)
    {
        pasazerwczytaj[id-1].zajete = false;
        printf("Usunięto rezerwacje pasażera %s %s\n", pasazerwczytaj[id-1].imie, pasazerwczytaj[id-1].nazwisko);
    }
    
    printf("Dziękujemy\n");
    
}

void usun_enter()
{
    while(getchar() != '\n')
        continue;
}



