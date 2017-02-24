//
//  do_while.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
int main(void)
{
    const int tajny_kod = 13;
    int wprowadzony_kod;
    
    do
    {
        printf("Aby wejsc do klubu terapeutycznego agorafobii,\n");
        printf("Wprowadz wlasciwy kod: ");
        scanf("%d", &wprowadzony_kod);
    } while(wprowadzony_kod != tajny_kod);
    
    printf("Gratulacje! Jestes wyleczony!\n");
    return 0;
}