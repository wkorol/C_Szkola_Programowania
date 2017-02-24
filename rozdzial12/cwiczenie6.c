//
//  cwiczenie6.c
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
    int i, n, x;
    int *tab1;
    int temp;
    int licz_1 = 0, licz_2 = 0, licz_3 = 0, licz_4 = 0, licz_5 = 0, licz_6 = 0, licz_7 = 0, licz_8 = 0, licz_9 = 0, licz_10 = 0;
    //    int *tab2;
    tab1 = (int*) malloc (1000 * sizeof(int));
    //    tab2 = (int*) malloc (100 * sizeof(int));
    
    srand((unsigned ) time(0));
    
    for(i=0, n = 0; i<1000; i++, n++)
    {
        if(n==9)
            n=0;
        x = n + rand() % (11-n);
        switch (x) {
            case 1:
                licz_1++;
                break;
            case 2:
                licz_2++;
            case 3:
                licz_3++;
                break;
            case 4:
                licz_4++;
                break;
            case 5:
                licz_5++;
                break;
            case 6:
                licz_6++;
                break;
            case 7:
                licz_7++;
            case 8:
                licz_8++;
                break;
            case 9:
                licz_9++;
                break;
            case 10:
                licz_10++;
                break;
            default:
                break;
        }
    }
    
    
    
        printf("1: %d\n", licz_1);
        printf("2: %d\n", licz_2);
    printf("3: %d\n", licz_3);
    printf("4: %d\n", licz_4);
    printf("5: %d\n", licz_5);
    printf("6: %d\n", licz_6);
    printf("7: %d\n", licz_7);
    printf("8: %d\n", licz_8);
    printf("9: %d\n", licz_9);
    printf("10: %d\n", licz_10);
    
    
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