#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[100];  /* input string */
    char longest[100];  /* longest word */
    char shortest[100]; /* shortest word */
    char temp[100];

    printf("[Program to find the longest and shortest word]\n\n");
    printf("Enter a sentence\n> ");
    fgets(str, 100, stdin);

    longest[0] = '\0';
    shortest[0] = '\0';
    temp[0] = '\0';

    for(i = 0; str[i] != '\0'; ++i) /* finding the longest word */
    {
        if((str[i] == ' ') || (str[i] == '\n'))
        {
            if(strlen(longest) < strlen(temp))
                strcpy(longest, temp);
            temp[0] = '\0';
        }
        else
            strncat(temp, &str[i], 1);
    }

    for(i = 0; str[i] != '\0'; ++i) /* finding the shortest word */
    {
        if((str[i] == ' ') || (str[i] == '\n'))
        {
            if((strlen(shortest) > strlen(temp)) || (shortest[0] == '\0'))
                strcpy(shortest, temp);
            temp[0] = '\0';
        }
        else
            strncat(temp, &str[i], 1);
    }

    printf("\nLongest word: %s\n", longest);
    printf("Shortest word: %s\n", shortest);
    return 0;
}
