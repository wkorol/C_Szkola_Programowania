//
//  cwiczenie15.c
//  
//
//  Created by Wiktor Korol on 28.07.2015.
//
//

#include <stdio.h>


int main()
{
    
    int lata;
    double ewa, kasia;

    for(ewa=100, kasia=100, lata=0; ewa>=kasia; ewa=ewa+10, kasia=kasia+0.05*kasia)
        lata++;
    
    
    printf("Po %d latach inwestycja Kasi (%.f zł) przekroczy inwesytcje Ewy (%.f zł)\n", lata, kasia,ewa);
    return 0;
}
