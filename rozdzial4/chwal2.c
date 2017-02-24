//
//  chwal2.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#include <string.h> //dostarcza prototypu dla strlen()
#define POCHWALA "Ach, jakie wspaniale imie!"
int main(void)
{
    char imie[40];
    
    printf("Jak masz na imie?\n");
    scanf("%s", imie);
    printf("Witaj, %s. %s\n",imie,  POCHWALA);
    printf("Twoje imie, skladajace sie z %lu liter, zajmuje %lu komorek pamieci.\n", strlen(imie), sizeof(imie));
    printf("Pochwala sklada sie z %lu liter ", strlen(POCHWALA));
    printf("i zajmuje %lu komorek pamieci.\n", sizeof(POCHWALA));
    return 0;
}