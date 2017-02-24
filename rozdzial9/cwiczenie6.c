//
//  cwiczenie6.c
//  
//
//  Created by Wiktor Korol on 30.09.2015.
//
//

#include <stdio.h>
#include <ctype.h>
void zwracanie(char *ch);
int main()
{
    char ch;
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            continue;
        zwracanie(&ch);
    }
    
}

void zwracanie(char *ch)
{
    int tab1[50], tab2[50], i, j;
    char znak;
    
    for(znak = 'a', i=1; znak<='z'; znak++, i++)
    {
        tab1[i] = znak;
    }
    for(znak = 'A', i=1; znak<='Z'; znak++, i++)
    {
        tab2[i] = znak;
    }
    
    
    if(isalpha(*ch))
    {
        for(j=0; j<50; j++)
        {
            if(islower(*ch))
            {
                if(*ch == tab1[j])
                {
                    printf("%c - %d\n", *ch, j);
                    break;
                }
            }
            else
            {
                if(*ch == tab2[j])
                {
                    printf("%c - %d\n", *ch, j);
                    break;
                }
            }
        }
    }
    
    else
        printf("-1\n");
}
