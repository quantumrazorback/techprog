#include <stdio.h>

int main()
{
    char input[500];
    gets(input);
    int symbol;
    int chars = 0;
    int lettercount = 0;
    while(input[chars] != NULL)
    {
        symbol = input[chars];
        if (((symbol <= 90) && (60 <= symbol)) || ((symbol <= 122) && (97 <= symbol))) lettercount++;
        chars++;
    }
    symbol = lettercount * 100 / chars;
    printf("\n%d%%", symbol);
}
