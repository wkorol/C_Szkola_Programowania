//zle_arg.c -- nieprawidlowe argumenty

#include <stdio.h>
int main(void)
{
    int f = 4;
    int g = 5;
    float h = 5.0f;
    
    printf("%d\n", f, g); //za duzo argumentow
    printf("%d %d\n", f); //za malo argumentow
    printf("%f %d\n", g, h);
    return 0;
}