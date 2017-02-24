#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define LANCUCHY 10
#define ROZMIAR 101

//void menu(void);
//void wyczysc(void);
void lista(char *wsk[], int licz);
void ASCII(char *y[], int x);
void dlugosc(char *y[], int x);
//void pierwsze(char *y[], int x);

int main(void)
{
    char tab[LANCUCHY][ROZMIAR];
    char *wsk[LANCUCHY];
    int licz = 0, wybor;
    
    puts("Podaj maksymalnie dziesiec lancuchow znakowych");
    puts("Wcisnji enter aby zakonczyc");
    printf("Podaj %d lancuch\n", licz + 1);
    while ((licz < LANCUCHY) && (gets(tab[licz]) != NULL) && (tab[licz][0] != '\0'))
    {
        wsk[licz] = tab[licz];
        licz++;
        if(licz != 10)
        printf("Podaj %d lancuch\n", licz + 1);
    }
    //menu();
   while (scanf("%d", &wybor))
    {
        switch(wybor)
        {
            case 1 :
                lista(wsk, licz);
                break;
            case 2 :
                ASCII(wsk, licz);
               //menu();
                break;
            case 3 :
                dlugosc(wsk, licz);
                //menu();
                break;
            case 4 :
                //pierwsze(wsk, licz);
                //menu();
                break;
            case 5 :
                //wyczysc();
                //menu();
                break;
            case 6 :
                return 0;
            default :
                puts("Wybierz liczbe od 1 do 6");
                //menu();
        }
    }
    return 0;
}


void lista(char *wsk[], int licz)
{
    int i;
    for(i=0; i<licz; i++)
    {
        printf("%s\n", *wsk);
        wsk++;
    }
    
    
}

void ASCII(char *wsk[], int licz)
{
    int i,j,k =0;
    char *temp[LANCUCHY];
    char *y[LANCUCHY];
    
    for(i=0; i<licz; i++)
    {
        y[i] = wsk[i];
    }
    
    for(i=0; i<licz; i++)
    {
        k=0;
        for(j=i+1; j<licz-1; j++)
        {
            for(k=0; k<licz; k++)
            {
                if(y[i][k] > y[j][k])
                {
                    temp[i] = y[i];
                    y[i] = y[j];
                    y[j] = temp[i];
                }
            }
        }
        
    }
    
    for(i=0; i<licz; i++)
    {
        printf("%s\n", y[i]);
    }
    
}

void dlugosc(char *wsk[], int licz)
{
    char *y[LANCUCHY];
    char *temp[LANCUCHY];
    int i,j;
    
    for(i=0; i<licz; i++)
    {
        y[i] = wsk[i];
    }

    for(i=0; i<licz; i++)
    {
        for(j=i+1; j<licz; j++)
        {
            if(strlen(y[i]) > strlen(y[j]))
            {
                temp[i] = y[i];
                y[i] = y[j];
                y[j] = temp[i];
            }
        }
        
    }
    
    for(i=0; i<licz; i++)
    {
        printf("%s\n", y[i]);
    }
}