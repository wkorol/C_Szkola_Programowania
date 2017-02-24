//
//  deszcz.c
//  
//
//  Created by Wiktor Korol on 11.10.2015.
//
//

//znajduje sumy roczne, roczna srednia oraz srednia miesieczna dla danych o opadach z kilku lat

#include <stdio.h>
#define MIESIACE 12
#define LATA 5
int main(void)
{
    //inicjalizacja danych o opadach z lat 2000-2004
    const float deszcz[LATA][MIESIACE] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
        
        
    };
    
    int rok, miesiac;
    float podsuma, suma;
    printf("ROK       OPADY (w calach)\n");
    for(rok = 0, suma = 0; rok<LATA; rok++)
    { //dla kazdego roku sumuj opady dla kazdego miesiaca
        for(miesiac = 0, podsuma = 0; miesiac < MIESIACE; miesiac++)
            podsuma += deszcz[rok][miesiac];
        printf("%5d %12.1f\n", 2000 + rok, podsuma);
        suma+=podsuma; //suma dla wszystkich lat
    }
    printf("\nRoczna srednia wynosi %.1f cale\n\n", suma/LATA);
    printf("SREDNIE MIESIECZNE:\n\n");
    printf(" Sty  Lut  Mar  Kwi  Maj  Cze  Lip  Sie  Wrz  Paz  Lis  Gru\n");
    for(miesiac = 0; miesiac < MIESIACE; miesiac++)
    { //Dla kazdego miesiaca, sumuj odpady w ciagu lat
        for(rok = 0, podsuma = 0; rok < LATA; rok++)
            podsuma += deszcz[rok][miesiac];
        printf("%4.1f ", podsuma/LATA);
    }
    printf("\n");
    return 0;
}