//
//  sprmiejs.c
//  
//
//  Created by Wiktor Korol on 22.09.2015.
//
//

#include <stdio.h>
void mikado(int);
int main(void)
{
    int ach = 2, och = 5;
    printf("W funkcji main() ach = %d, a &ach = %p\n", ach, &ach);
    printf("W funkcji main() och = %d, a &och = %p\n", och, &och);
    mikado(ach);
    return 0;
}

void mikado(int och)
{
    int ach = 10;
    printf("W funkcji mikado() ach = %d, a &ach = %p\n", ach, &ach);
    printf("W funkcji mikado() och = %d, a &och = %p\n", och, &och);
}