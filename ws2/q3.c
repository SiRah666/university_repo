#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j;
    char normal[100];   /* original input string */
    char reverse[100];  /* reverse of input string */

    printf("[Program to test if a word is Palindrome]\n\n");
    printf("Enter a word\n> ");
    scanf("%s", &normal);

    for(i = 0; i < strlen(normal); i++) /* converting string to lower case */
        normal[i] = tolower(normal[i]);

    for(i = strlen(normal)-1, j = 0; i >= 0; i--, j++)
        reverse[j] = normal[i];
    reverse[j] = '\0';

    if((strcmp(normal, reverse) == 0))
        printf("\n%s is a Palindrome", normal);
    else
        printf("\n%s is not a Palindrome", normal);
    return 0;
}
