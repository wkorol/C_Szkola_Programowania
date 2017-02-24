//
//  konwers.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float fl;
    
    fl = i = ch = 'A';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = ch+1;
    i = fl + 2 * ch;
    fl = 2.0 *  ch+i;
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = 5212205.17;
    printf("Teraz ch = %c\n", ch);
    return 0;
}