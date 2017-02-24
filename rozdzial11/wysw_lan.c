//
//  wysw_lan.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
#define DEF "Jestem zdefiniowanym lancuchem."
int main(void)
{
    char lan1[80] = "Przypisano mnie tablicy.";
    char *lan2 = "Przypisano mnie wskaznikowi.";
    puts("Jestem argumentem funkcji puts().");
    puts(DEF);
    puts(lan1);
    puts(lan2);
    puts(&lan1[4]);
    puts(lan2+4);
    return 0;
}