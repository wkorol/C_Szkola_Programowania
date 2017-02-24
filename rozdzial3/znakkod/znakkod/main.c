// znakkod.c -- wyswietla znak i odpowiadajacy mu kod
#include <stdio.h>
int main()
{
    char ch;
    
    printf("Wpisz jakis znak.\n");
    scanf("%c", &ch); //uzytkownik podaje znak
    
    printf("Kod znaku %c to %d.\n", ch, ch);
    return 0;
}