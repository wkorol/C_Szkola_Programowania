// dwie_fun -- program wykorzystujacy dwie funkcje w jednym pliku
#include <stdio.h>
void lokaj(void);

int main(void)
{
    printf("Wywolam funkcje lokaja.\n");
    lokaj();
    printf("Tak. Przynies mi herbate i zapisywalne CD-Romy.\n");
    return 0;
    
}

void lokaj(void) //poczatek definicji funkcji

{
    printf("Pan wzywal?\n");
}