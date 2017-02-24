#include <stdio.h>

int main(int argc, const char * argv[]) {
    int dzien;
    int miesiac;
    int rok;
    int n=1032225;
    
    
    dzien = n>>5;
    dzien <<= 5;
    dzien = n - dzien;
    miesiac = n>>5;
    rok = n>>9;
    miesiac = miesiac-(rok<<4);
 
    printf("%d.%d.%d\n", dzien, miesiac, rok);
    
    
    
    
    
    return 0;
}
