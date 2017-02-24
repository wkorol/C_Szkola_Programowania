//preproc.c -- proste przyklady uzycia preprocesora
#include <stdio.h>
#define DWA 2
#define OW "Konsekwencja jest ostatnim schronieniem ludzi pozba\
wionych fantazji.\n- Oscar Wilde"
#define CZTERY DWA*DWA
#define PX printf("X wynosi %d.\n", x)
#define FMT "X wynosi %d.\n"
int main(void)
{
    int x = DWA;
    PX;
    x = CZTERY;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("Dwa: OW\n");
    
    return 0;
}