//
//  dni_m2.c
//  
//
//  Created by Wiktor Korol on 11.10.2015.
//
//

#include <stdio.h>
int main(void)
{
    int dni[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;
    for(index = 0; index < sizeof dni / sizeof (int); index++)
        printf("Miesiac %d ma %d dni.\n", index+1, dni[index]);
    return 0;
}