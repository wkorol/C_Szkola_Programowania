//
//  cwiczenie6.c
//  
//
//  Created by Wiktor Korol on 16.10.2015.
//
//

#include <stdio.h>
#define WIERSZE 3
#define KOLUMNY 4
void kopiuj_tab(int tab[][KOLUMNY], int tab2[][KOLUMNY], int wiersze);
int main()
{
    int tab[WIERSZE][KOLUMNY] = {
        {1,2,3,4},
        {6,7,1,3},
        {6,9,2,3}
    };
    
    int tab2[WIERSZE][KOLUMNY];
    
    kopiuj_tab(tab, tab2, WIERSZE);
    

    
    return 0;
}

void kopiuj_tab(int tab[][KOLUMNY], int tab2[][KOLUMNY], int wiersze)
{
    int w, k;
    for(w = 0; w<wiersze; w++)
    {
        for(k = 0; k<KOLUMNY; k++)
        {
            tab2[w][k] = tab[w][k];
            printf("tab2[%d][%d] = %d ", w, k, tab2[w][k]);
        }
        printf("\n");
    }
    
    printf("\n");
}