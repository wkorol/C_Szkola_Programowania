//
//  w_i_l.c
//  
//
//  Created by Wiktor Korol on 02.11.2015.
//
//

#include <stdio.h>
int main(void)
{
    char * tekst = "Nie badz glupi!";
    char *kopia;
    
    kopia = tekst;
    printf("%s\n", kopia);
    
    printf("tekst = %s, &tekst = %p, wartosc = %p\n", tekst, &tekst, tekst);
    
    printf("kopia = %s, &kopia = %p, wartosc = %p\n", kopia, &kopia, kopia);
    
    return 0;
}