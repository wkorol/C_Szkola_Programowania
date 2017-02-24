#include <stdio.h>
int main()
{
    int out;
    printf("Wprowadz kod ASCII: ");
    scanf("%d", &out);
    printf("Znak odpowiadajacy kodowi %d to %c", out, out);
    return 0;
}