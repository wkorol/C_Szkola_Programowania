//
//  zmntab2d.c
//  
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

#include <stdio.h>
#define WIERSZE 3
#define KOLUMNY 4
int sumuj2d(int wiersze, int kolumny, int tab[wiersze][kolumny]);
int main(void)
{
    int i, j;
    int rw = 3;
    int rk = 10;
    int graty[WIERSZE][KOLUMNY] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };
    
    int wiecejgratow[WIERSZE-1][KOLUMNY+2] = {
        {20,30,40,50,60,70},
        {5,6,7,8,9,10}
    };
    
    int zmtab[rw][rk]; //VLA
    
    for(i=0; i<rw; i++)
        for(j=0;j<rk;j++)
            zmtab[i][j] = i*j+j;
    printf("tablica 3x4\n");
    printf("Suma wszystkich elementow = %d\n", sumuj2d(WIERSZE, KOLUMNY, graty));
    printf("tablica 2x6\n");
    printf("Suma wszystkich elementow = %d\n", sumuj2d(WIERSZE-1, KOLUMNY+2, wiecejgratow));
    printf("VLA 3x10\n");
    printf("Suma wszystkich elementow = %d\n", sumuj2d(rw, rk, zmtab));
    return 0;
    
}

//Funkcja z parametrem VLA
int sumuj2d(int wiersze, int kolumny, int tab[wiersze][kolumny])
{
    int w;
    int k;
    int suma = 0;
    for(w = 0; w< wiersze; w++)
        for(k=0; k<kolumny; k++)
            suma += tab[w][k];
    
    return suma;
}

