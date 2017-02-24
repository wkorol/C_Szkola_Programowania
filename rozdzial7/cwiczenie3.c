//
//  cwiczenie3.c
//  
//
//  Created by Wiktor Korol on 29.07.2015.
//
//

#include <stdio.h>
#include <ctype.h>
int main()
{
    int ch;
    int parzyste = 0, nieparzyste = 0;
    float sr_p = 0, sr_n = 0;
    
    while(scanf("%d", &ch)==1 && ch != 0)
          {
              if(ch%2==0)
              {
                  sr_p = sr_p + ch;
                  parzyste++;
              }
              else
              {
                  sr_n = sr_n + ch;
                  nieparzyste++;
              }
            
          }
    
          printf("Wpisales %d parzystych, %d nieparzystych\n", parzyste, nieparzyste);
          printf("Srednia wartosc parzystej: %.2f, nieparzystej: %.2f\n", sr_p/parzyste, sr_n/nieparzyste);
    
    
    return 0;
}