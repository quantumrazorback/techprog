#include <stdio.h>

int main()
{
    char input[500];
    gets(input);
    int symbol, chars = 0;
    while (input[chars] != NULL)
    {
        symbol = input[chars];
        printf("\n%c\t%d", symbol, symbol);
        chars++;
    }
    chars = 0;
    printf("\n");
    while (input[chars] != NULL)
    {
        symbol = input[chars];
        if ((symbol <= 122) && (97 <= symbol)) printf("%c", symbol-32);
        else printf("%c", symbol);
        chars++;
    }
    chars = 0;
    printf("\n");
    while (input[chars] != NULL)
    {
        symbol = input[chars];
        if ((symbol <= 90) && (65 <= symbol)) printf("%c", symbol+32);
        else printf("%c", symbol);
        chars++;
    }
}
