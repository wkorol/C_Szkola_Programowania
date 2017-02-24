//
//  znaczki.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define PIERWSZE 0.70
#define NASTEPNE 0.30
#define G 25
int main(void)
{
    int gramy;
    float cena;
    
    printf(" waga   cena\n");
    for(gramy=G, cena=PIERWSZE; gramy<= 400; gramy +=G, cena += NASTEPNE)
        printf("%5d %7.2f\n", gramy, cena);
    return 0;
}