//
//  dni_m1.c
//  
//
//  Created by Wiktor Korol on 11.10.2015.
//
//

#include <stdio.h>
#define MIESIACE 12
int main(void)
{
    int dni[MIESIACE] = {31,28,31,30,31,30,31, 31,30,31,30,31};
    int index;
    for(index = 0; index < MIESIACE; index++)
        printf("Miesiac %d ma %d dni.\n", index+1, dni[index]);
    return 0;
}