//
//  kopia1.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#include <string.h>
#define ROZMIAR 40
#define GRAN 5
int main()
{
    char vslowa[GRAN][ROZMIAR];
    char temp[ROZMIAR];
    int i = 0;
    printf("Podaj %d slow zaczynajacych sie na v:\n", GRAN);
    while(i<GRAN && gets(temp))
    {
        if(temp[0] != 'v')
            printf("%s nie zaczyna sie na v!\n", temp);
        else
        {
            strcpy(vslowa[i], temp);
            i++;
        }
    }
    puts("Oto przyjete slowa: ");
    for(i=0; i< GRAN; i++)
        puts(vslowa[i]);
    return 0;
}