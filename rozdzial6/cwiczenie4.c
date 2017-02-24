#include <stdio.h>
#define RZEDY 5

int main()
{
    int i, odstep, malejaco, rosnaco;
    char ch;
    
    printf("Wprowadz wielka litere: ");
    scanf("%c", &ch);
    
    for(i=0; i<RZEDY; i++)
    {
        for(odstep=RZEDY; odstep>i; odstep--)
            printf(" ");
        for(rosnaco=0; rosnaco<=i; rosnaco++,ch++)
            printf("%c", ch-4);
        ch-=rosnaco;
        for(malejaco=0; malejaco<i; malejaco++, ch--)
            printf("%c", ch-RZEDY+i);
        ch+=malejaco;
        printf("\n");
            //printf("test\n");
        
    }
        
    
    
    
    
    return 0;
}