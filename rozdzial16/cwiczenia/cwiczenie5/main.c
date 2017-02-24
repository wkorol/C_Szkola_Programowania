#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROZMIAR 30

void generujtablice(int tab[], int n);
void funkcja(int tab[], int n, int liczba_poz);
void pokaztab(int tab[], int n);
int main()
{
    srand((unsigned) time(NULL));
    int tab[ROZMIAR];
    int liczba_poz;
    
    generujtablice(tab, ROZMIAR);
    pokaztab(tab, ROZMIAR);
    
    liczba_poz = rand() % ROZMIAR;
    
    funkcja(tab, ROZMIAR, liczba_poz);
    
    
    return 0;
}

void funkcja(int tab[], int n, int liczba_poz) {
    
    int i = 0,j;
    int ile = 0;
    printf("Wybieram %d pozycji\n", liczba_poz);
    
    while (i<liczba_poz) {
        
        for(j=i+1; j<liczba_poz; j++)
        {
            if (tab[i] == tab[j])
                ile++;
        }
        
        if(ile == 0)
            printf("%d ", tab[i]);
        ile = 0;
        i++;
    }
    
    putchar('\n');
    
    
}

void generujtablice(int tab[], int n) {
    
    int i;
    
    for(i=0; i<n; i++)
    {
        tab[i] = rand() % 100;
    }
    
    
    
}

void pokaztab(int tab[], int n)
{
    int i;
    for (i=0; i<n; i++) {
        printf("%d ", tab[i]);
    }
    putchar('\n');
    
}