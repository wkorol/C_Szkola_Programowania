//
//  cwiczenie2.c
//  
//
//  Created by Wiktor Korol on 30.09.2015.
//
//

#include <stdio.h>
void rzad_zn(char ch, int i, int j);
int main()
{
    int i, j;
    char ch;
    printf("Jaki znak chcesz wyswietlic?\n");
    scanf("%c", &ch);
    printf("Od której kolumny mam zacząć?\n");
    scanf("%d", &i);
    printf("Na której kolumnie mam skończyć?\n");
    scanf("%d", &j);
    rzad_zn(ch, i, j);
    return 0;
}

void rzad_zn(char ch, int i, int j)
{
    int pom;
    pom = i;
    for(; i<=j; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for(; pom<=j; pom++)
    {
        printf("%c ", ch);
    }
    printf("\n");
}