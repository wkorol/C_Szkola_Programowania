//sekwenc.c -- korzysta ze znakow sterujacych
#include <stdio.h>
int main()
{
    float pensja;
    printf("Podaj miesieczne wynagrodzenie, na jakie zaslugujesz:");
    printf(" _________ zl\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &pensja);
    printf("\n\t%.2f zl miesiecznie to %.2f zl rocznie.", pensja, pensja*12.0);
    printf("\rHo, ho!\n");
    return 0;
}