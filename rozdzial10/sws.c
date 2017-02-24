//
//  sws.c
//  
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

//smiesznie wygladajace stale

#include <stdio.h>
#define KOLUMNY 4
int sumuj2d(int tab[][KOLUMNY], int wiersze);
int sumuj(int tab[], int n);
int main(void)
{
    int suma1, suma2, suma3;
    int *wsk1;
    int (*wsk2)[KOLUMNY];
    wsk1 = (int [2]) {10, 20};
    wsk2 = (int [2][KOLUMNY]) { {1,2,3,-9}, {4,5,6,-8}};
    
    suma1 = sumuj(wsk1, 2);
    suma2 = sumuj2d(wsk2, 2);
    suma3 = sumuj((int []){4,4,4,5,5,5}, 6);
    printf("suma1 = %d\n", suma1);
    printf("suma2 = %d\n", suma2);
    printf("suma3 = %d\n", suma3);
    
    return 0;
}

int sumuj(int tab[], int n)
{
    int i;
    int suma = 0;
    for(i=0; i<n; i++)
        suma+= tab[i];
    
    return suma;
}

int sumuj2d(int tab[]KOLUMNY], int wiersze)
{
    int w;
    int k;
    int suma = 0;
    for(w = 0; w<wiersze; w++)
        for(k=0; k<KOLUMNY; k++)
            suma+= tab[w][k];
    
    return suma;
}