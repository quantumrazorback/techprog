#include <stdio.h>
#include <string.h>

int main()
{
    const int n = 5;
    char input[n][500], temp[500];
    int symbol1, symbol2;
    for (int i = 0; i < n; i++) gets(input[i]);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            symbol1 = input[j-1][0];
            symbol2 = input[j][0];
            if ((symbol1 <= 122) && (97 <= symbol1)) symbol1 -= 32;
            if ((symbol2 <= 122) && (97 <= symbol2)) symbol2 -= 32;
            if (symbol1 > symbol2)
            {
                strcpy(temp, input[j-1]);
                strcpy(input[j-1], input[j]);
                strcpy(input[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) printf("\n%s", input[i]);
}
