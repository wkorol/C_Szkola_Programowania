#include <stdio.h>
int main(void)
{
    char ch;
    
    scanf("%c", &ch);
    for(ch= '@'; ch != 'k'; scanf("%c", &ch))
        putchar(ch);
    return 0;
}