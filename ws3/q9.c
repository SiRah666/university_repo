#include <stdio.h>
#define MAXROW 10
#define MAXCOL 20

int main()
{
    int i, j, k;
    int m1_row, m1_col, m2_row, m2_col; /* rows and columns of m1, m2 matrices */
    int m1[MAXROW][MAXCOL], m2[MAXROW][MAXCOL], m3[MAXROW][MAXCOL]; /* m3 is the resultant matrix*/

    printf("[Multiply two user entered matrices]\n\n");
    while(1)
    {
        printf("Enter number of row of 1st matrix: ");
        scanf("%d", &m1_row);

        if(m1_row <= MAXROW)
        {
           while(1)
            {
                printf("Enter number of column of 1st matrix: ");
                scanf("%d", &m1_col);

                if(m1_col <= MAXCOL)
                    break;
                printf("Error: maximum allowed column is %d\n", MAXCOL);
            }
            break;
        }
        printf("Error: maximum allowed row is %d\n", MAXROW);
    }

    while(1)
    {
        printf("Enter number of row of 2nd matrix: ");
        scanf("%d", &m2_row);

        if(m2_row <= MAXROW)
        {
           while(1)
            {
                printf("Enter number of column of 2nd matrix: ");
                scanf("%d", &m2_col);

                if(m2_col <= MAXCOL)
                    break;
                printf("Error: maximum allowed column is %d\n", MAXCOL);
            }
            break;
        }
        printf("Error: maximum allowed row is %d\n", MAXROW);
    }

    if(m1_col != m2_row)
    {
        printf("Error: Matrices not suitable for multiplication");
        return 1;
    }

    for(i = 0; i < m1_row; i++)
        for(j = 0; j < m1_col; j++)
        {
            printf("Enter element [%d][%d] of 1st matrix: ", i, j);
            scanf("%d", &m1[i][j]);
        }

    for(i = 0; i < m2_row; i++)
        for(j = 0; j < m2_col; j++)
        {
            printf("Enter element [%d][%d] of 2nd matrix: ", i, j);
            scanf("%d", &m2[i][j]);
        }

    for(i = 0; i < m1_row; i++) /* initializing matrix with 0 */
        for(j = 0; j < m2_col; j++)
            m3[i][j] = 0;

    for(i = 0; i < m1_row; i++)
        for(j = 0; j < m2_col; j++)
            for(k = 0; k < m2_row; k++)
                m3[i][k] += m1[i][j] * m2[j][k];

    printf("\nThe product of the matrices\n");
    for(i = 0; i < m1_row; i++)
    {
        printf("|");
        for(j = 0; j < m2_col; j++)
            printf(" %d ", m3[i][j]);
        printf("|\n");
    }

    return 0;
}
