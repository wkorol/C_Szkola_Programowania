//
//  cwiczenie5.c
//  
//
//  Created by Wiktor Korol on 15.11.2015.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j, x;
    int *tab1;
    int temp;
//    int *tab2;
    tab1 = (int*) malloc (100 * sizeof(int));
//    tab2 = (int*) malloc (100 * sizeof(int));
    
    srand((unsigned ) time(0));
    
    for(i=0; i<100; i++)
    {
        tab1[i] = rand() % 10 + 1;
    }
    
    
    for(i = 0; i<100; i++)
    {
        for(j = i+1; j<100; j++)
        {
            if (tab1[i] < tab1[j])
            {
                temp =  tab1[i];
                tab1[i] = tab1[j];
                tab1[j] = temp;
            }
        }
    }
    
    for(i=0; i<100; i++)
    {
        printf("%d\n", tab1[i]);
    }
    
    return 0;
}

//int main()
//{
//    int i, n;
//    time_t t;
//    
//    n = 5;
//    
//    /* Intializes random number generator */
//    srand((unsigned) time(&t));
//    
//    /* Print 5 random numbers from 0 to 50 */
//    for( i = 0 ; i < n ; i++ )
//    {
//        printf("%d\n", rand() % 50);
//    }
//    
//    return(0);
//}