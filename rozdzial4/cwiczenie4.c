//
//  cwiczenie4.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>

int main()
{
float wzrost;
char imie[40];

printf("Wprowadz swoj wzrost w [cm]: \n");
scanf("%f", &wzrost);
printf("Wprowadz swoje imie: \n");
scanf("%s", imie);
printf("%s, masz %.2f metra wzrostu\n", imie, wzrost/100);

return 0;
}