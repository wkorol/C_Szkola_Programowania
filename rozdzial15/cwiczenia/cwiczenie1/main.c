//
//  main.c
//  cwiczenie1
//
//  Created by Wiktor Korol on 07.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>

int bin_to_dec (char * wbin);


int main(int argc, const char * argv[]) {

    printf("%d\n", bin_to_dec("01001001"));
    
    return 0;
}


int bin_to_dec (char * wbin) {
    
    int liczba = 0;
    while (*wbin != '\0')
    {
        liczba = 2 * liczba + (*wbin++ - '0');
    }
    
    return liczba;
}

