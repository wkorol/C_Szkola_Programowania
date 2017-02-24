//
//  hash.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
void hash(int n); //prototyp Ansi

int main(void)
{
    int razy = 5;
    char ch = '!'; //Kod ascii wykrzyknika to 33
    float f = 6.0;
    
    hash(razy); //argument typu int
    hash(ch); //char jest automatycznie przetwarzany na int
    hash((int) f); //rzutowanie wymusza konwersje f do int
    
    return 0;
}

void hash (int n) //Funkcja pobiera jeden argument typu int
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}