//
//  cwiczenie1.c
//  
//
//  Created by Wiktor Korol on 26.07.2015.
//
//

#include <stdio.h>
int main()
{
    char tab[26];
    int i;
    
    for(i=0; i<26; i++)
        tab[i] = 'a'+i;
    for(i=0; i<26;i++)
        printf("%c ", tab[i]);
    
    return 0;
}