//systemy.c -- wyswietla 100 w zapisie dziesietnym, osemkowym i szesnastkowym
#include <stdio.h>
int main(void)
{
    int x = 100;
    
    printf("dziesietny = %d; osemkowy = %o; szesnastkowy = %x\n", x, x, x);
    printf("dziesietny = %d; osemkowy = %#o; szesnastkowy = %#x\n", x ,x ,x );
    return 0;
}