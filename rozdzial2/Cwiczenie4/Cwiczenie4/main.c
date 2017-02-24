#include <stdio.h>

int jan1(void);
int jan2(void);

int main()
{
    jan1();
    jan1();
    jan2();
    return 0;
}

int jan1(void)
{
    printf("Panie Janie!\n");
    return 0;
}

int jan2(void)
{
    printf("Rano wstan!\n");
    return 0;
}