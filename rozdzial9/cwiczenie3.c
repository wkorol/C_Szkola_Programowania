//
//  cwiczenie3.c
//  
//
//  Created by Wiktor Korol on 30.09.2015.
//
//

#include <stdio.h>
void funkcja(char ch, int a, int b);
int main()
{
    char ch;
    int a, b;
    printf("Jaki znak chcesz wyswietlic?\n");
    scanf("%c", &ch);
    printf("Ile razy chcesz wyswietlic ten znak w jednym wierszu?\n");
    scanf("%d", &a);
    printf("Ile wierszy chcesz wyswietlic?\n");
    scanf("%d", &b);
    
    funkcja(ch, a,b);

    return 0;
}

void funkcja(char ch, int a, int b)
{
    int i, j;
    
    for(j=0; j<b;j++)
    {
        
        for(i=0; i<a;i++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}