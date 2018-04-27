#include <stdio.h>
#include <string.h>

int main()
{
    char input[250];
    gets(input);
    /*int chars = 0;
    while(input[chars] != NULL) chars++;
    printf("%d", chars);*/
    printf("%d", strlen(input));
}
