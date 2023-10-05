#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    char str[100];

    printf("[Program to print ASCII code of word]\n\n");
    printf("Enter a word\n> ");
    scanf("%s", &str);

    printf("\nThe ASCII equivalent of %s = ");
    for(i = 0; i < strlen(str); i++)
        printf("%d", str[i]);
    return 0;
}
