//
//  main.c
//  cwiczenie2
//
//  Created by Wiktor Korol on 15.11.2015.
//  Copyright © 2015 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include "pe12-2a.h"

int main(void) {
    
    int tryb;
    
    printf("Wybierz: 0 - system metryczny, 1 - system US: ");
    scanf("%d", &tryb);
    while (tryb >= 0) {
        wybierz_tryb(tryb);
        pobierz_dane();
        wyswietl_dane();
        
        
        printf("Wybierz: 0 - system metryczny, 1 - system US");
        printf(" (-1 aby zakonczyc): ");
        scanf("%d", &tryb);
    }
    
    printf("Koniec.\n");
    return 0;
}
