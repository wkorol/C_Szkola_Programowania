//
//  cwiczenie3.c
//  
//
//  Created by Wiktor Korol on 01.09.2015.
//
//

#include <stdio.h>
int main()
{
    
    int malelitery = 0, duzelitery = 0;
    
    char ch;
    
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
        {
                printf("Wprowadziles juz lacznie %d duzych liter i %d malych liter\n", duzelitery, malelitery);
            continue;
        }
        if(ch >= 'A' && ch<= 'Z')
            duzelitery++;
        if(ch >= 'a' && ch<= 'z')
            malelitery++;
        
    }
    return 0;
}