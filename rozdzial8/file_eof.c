//
//  file_eof.c
//  
//
//  Created by Wiktor Korol on 26.08.2015.
//
//

#include <stdio.h>
#include <stdlib.h> // funkcja exit()
int main()
{
    int ch;
    FILE *fp; //przechowuje nazwe pliku
    char nazwplik[50]; //przechowuje nazwepliku
    
    printf("Podaj nazwe pliku: ");
    scanf("%s", nazwplik);
    
    fp = fopen(nazwplik, "r"); // otwiera plik do odczytu
    if(fp == NULL) //proba nieudana
    {
        printf("Blad przy probie otwarcia pliku.\n");
        exit(1); // wyjscie z programu
    }
    
    //getc(fp) pobiera znak z otwartego pliku
    while((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp); // zamyka plik
    
    return 0;
}