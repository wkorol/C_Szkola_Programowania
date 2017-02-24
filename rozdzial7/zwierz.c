//
//  zwierz.c
//  
//
//  Created by Wiktor Korol on 29.07.2015.
//
//

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    printf("Podaj mi litere, a ja podam Ci ");
    printf("nazwe zwierzecia\nna te litere.\n");
    printf("Wpisz mala litere; # konczy zabawe.\n");
    while((ch=getchar()) != '#')
    {
        if(islower(ch)) //tylko male litery
            switch(ch)
        {
            case 'a' :
                printf("aguti, roslinozerny gryzon z Ameryki Lacinskiej\n");
                break;
            case 'b' :
                printf("babirusa, dzika swinia indonezyjska\n");
                break;
            default :
                printf("To za trudne!\n");
        } //koniec switch
        else
            printf("Rozpoznaje tylko male litery.\n");
        while(getchar()!='\n')
            continue; //Pomija reszte wiersza wejsciowego
        printf("Podaj kolejna litere lub znak #.\n");
    } //koniec petli while
    printf("do widzenia!\n");
    return 0;
    
}