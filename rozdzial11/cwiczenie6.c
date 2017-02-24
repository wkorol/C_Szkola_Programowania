//
//  cwiczenie6.c
//  
//
//  Created by Wiktor Korol on 07.11.2015.
//
//

#include <stdio.h>
#include <string.h>
char *kopia(char *tekst1, char *tekst2, int n);
int main()
{
    char tekst1[100];
    char tekst2[100];
    int n;
    
    printf("Wprowadź jakiś tekst\n");
    gets(tekst2);
    printf("Ile znakow chcesz przekopiowac?");
    scanf("%d", &n);
    
    kopia(tekst1, tekst2, n);
    puts(tekst1);
    //strncpy(tekst1, tekst2, n);
    //puts(tekst1);
    
}

char *kopia(char *tekst1, char *tekst2, int n)
{
    int i=0;
    while(i<n)
    {
        //if(*tekst2 != '\0')
        tekst1[i] = tekst2[i];
        //tekst2++;
        i++;
    }
    
    
    
    
    return tekst1;
}