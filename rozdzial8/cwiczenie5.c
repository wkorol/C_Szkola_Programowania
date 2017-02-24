//
//  cwiczenie5.c
//
//
//  Created by Wiktor Korol on 26.08.2015.
//
//

#include <stdio.h>
int main(void)
{
    int proba = 50;
    int proba_gorna = 0;
    int proba_dolna = 0;
    int liczba = 0;
    
    char odpowiedz;
    char odpowiedz2;
    char odpowiedz3;
    
    printf("Wybierz liczbe od 1 do 100. Sprobuje ja zgadnac.\n");
    printf("Hmm.. czy Twoja liczba jest wieksza niz %d?, jesli rowna wpisz 'z'\n", proba);
    printf("Jesli wieksza, wpisz 'w', jesli mniejsza wpisz 'm'\n");
    while((odpowiedz = getchar()) != 'z') // pobranie odpowiedzi
    {
        
        if(odpowiedz == 'w')
        {
            proba_dolna = proba;
            proba = proba + (100 - proba)/2;
            proba_gorna = proba;
            printf("Czy Twoja liczba jest wieksza czy mniejsza niz %d\n", proba_gorna);
            
            if(proba_dolna == 99)
            {
                liczba = 100;
                printf("A wiec Twoja liczba to %d, wpisz 'z', aby zakonczyc", liczba);
                break;
            }
        }
        
        if(odpowiedz == 'm' && proba <= 50)
        {
            proba_gorna = proba;
            proba = (proba - 1)/2;
            proba_dolna = proba;
            printf("Czy Twoja liczba jest wieksza czy mniejsza niz %d\n", proba);
            
            while((odpowiedz3 = getchar()) != 'z')
            {
                if(odpowiedz3 == 'm')
                {
                    proba_gorna = proba;
                    proba = (proba - 1)/2;
                    proba_dolna = proba;
                    if(proba_dolna == 0)
                    {
                        liczba = 1;
                        printf("A wiec Twoja liczba to %d, wpisz 'z', aby zakonczyc\n", liczba);
                        break;
                    }

                    printf("Czy Twoja liczba jest wieksza czy mniejsza niz %d\n", proba_dolna);
                                    }
                
                if(odpowiedz3 == 'w')
                {
                    printf("Twoja liczba miesci sie miedzy %d, a %d, rozpoczynamy zgadywanie\n", proba_dolna, proba_gorna);
                    printf("Czy Twoja liczba to %d?\n", proba_dolna);
                    while((odpowiedz3 = getchar()) != 't')
                    {
                        
                        if(proba_dolna < proba_gorna && odpowiedz3 == 'n')
                        {
                            proba_dolna++;
                            if(proba_dolna == proba_gorna)
                            {
                                printf("A wiec Twoja liczba to %d, wpisz 'z', aby zakonczyc program\n", proba_dolna);
                                liczba = proba_dolna;
                                break;
                            }
                            printf("Czy Twoja liczba to %d?\n", proba_dolna);
                            
                            
                        }
                        
                    }
                
                    
                    if(odpowiedz3 == 't')
                    {
                        printf("A wiec Twoja liczba to %d, wpisz 'z', aby zakonczyc\n", proba_dolna);
                        liczba = proba_dolna;
                        break;
                    }
  
                    
                    
                }
            }
            
        }
        
        
        if(odpowiedz == 'm' && proba > 50)
        {
            printf("Twoja liczba miesci sie miedzy %d, a %d, rozpoczynamy zgadywanie\n", proba_dolna, proba_gorna);
            printf("Czy Twoja liczba to %d?\n", proba_dolna);
            while((odpowiedz3 = getchar()) != 't')
            {
                
                if(proba_dolna < proba_gorna && odpowiedz3 == 'n')
                {
                    proba_dolna++;
                    if(proba_dolna == proba_gorna)
                    {
                        printf("A wiec Twoja liczba to %d, wpisz 'z', aby zakonczyc program\n", proba_dolna);
                        liczba = proba_dolna;
                        break;
                    }
                    printf("Czy Twoja liczba to %d t\n", proba_dolna);
                    
                    
                }
                
            }
            
            
            if(odpowiedz3 == 't')
            {
                printf("A wiec Twoja liczba to %d, wpisz 'z', aby zakonczyc\n", proba_dolna);
                liczba = proba_dolna;
                break;
            }
        }
       
        while(getchar() != '\n')
            continue;
    }
    
    
    if(proba == 50)
    {
        liczba = proba;
    }
    printf("Wiedzialem, ze mi sie uda!, twoja liczba to %d\n", liczba);
    return 0;
}