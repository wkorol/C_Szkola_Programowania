#include <stdio.h>
#include <string.h>

void odwracanie(char *lancuch);
int main()
{
    char lancuch[100];
    
    gets(lancuch);
    
    odwracanie(lancuch);
    
    puts(lancuch);
    
    return 0;
}

void odwracanie(char *lancuch)
{
    char temp[100];
    strcpy(temp, lancuch);
    int ostatni;
    ostatni = strlen(lancuch);
    char *pierwszy = lancuch;
    char *koniec = temp+ostatni-1;
    
    while(*pierwszy)
    {
        *pierwszy = *koniec;
        pierwszy++;
        koniec--;
    }
    
    
}