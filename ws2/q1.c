#include <stdio.h>

int main()
{
    int c, nc, nv, nw;  /* number of characters, vowels and word */
    int inword; /* flag variable */

    printf("[Program to calculate number of characters, vowels and words]\n\n");
    printf("Enter a sentence\n> ");
    nc = 0, nv = 0, nw = 0, inword = 0;
    while((c=getchar()) != '\n')
    {
        if((c>32) && (c<127))   /* count only printable characters */
        {
            ++nc;
            switch(c)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    ++nv;
                    break;

                default:
                    break;
            }
            inword = 1;
        }

        if((c == ' ') && (inword == 1))
        {
            ++nw;
            inword = 0;
        }
    }
    ++nw;

    printf("\nNumber of characters: %d\n", nc);
    printf("Number of vowels: %d\n", nv);
    printf("Number of words: %d\n", nw);
    return 0;
}
