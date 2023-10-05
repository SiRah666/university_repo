#include <stdio.h>
#define MAXROW 10
#define MAXCOL 20

int main()
{
    int i, j, row, col;
    int m1[MAXROW][MAXCOL], m2[MAXROW][MAXCOL];

    printf("[Add two user entered matrices]\n\n");
    while(1)
    {
        printf("Enter number of row: ");
        scanf("%d", &row);

        if(row <= MAXROW)
        {
           while(1)
            {
                printf("Enter number of column: ");
                scanf("%d", &col);

                if(col <= MAXCOL)
                    break;
                printf("Error: maximum allowed column is %d\n", MAXCOL);
            }
            break;
        }
        printf("Error: maximum allowed row is %d\n", MAXROW);
    }

    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
        {
            printf("Enter element [%d][%d] of 1st matrix: ", i, j);
            scanf("%d", &m1[i][j]);
        }

    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
        {
            printf("Enter element [%d][%d] of 2nd matrix: ", i, j);
            scanf("%d", &m2[i][j]);
        }

    printf("The sum of the two matrix\n");
    for(i = 0; i < row; i++)
    {
        printf("|");
        for(j = 0; j < col; j++)
            printf(" %d ", m1[i][j] + m2[i][j]);
        printf("|\n");
    }
}
