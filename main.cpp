#include <stdio.h>

int main()
{
    char input[500];
    gets(input);
    int wordcount = 1;
    for (int i = 0; i < 500; i++) if (input[i] == ' ') wordcount++;
    printf("%d", wordcount);
    for (int i = 0; i < wordcount; i++)
    {
        for (int n = 0; n < wordcount; n)
        {

        }
    }
}
