#include <stdio.h>
#define MAXROW 10
#define MAXCOL 20

int main()
{
    int i, j, m, n;
    int arr[MAXROW][MAXCOL], tarr[MAXROW][MAXCOL];  /* tarr = transpose of arr */


    printf("[Obtain transpose of matrix]\n\n");
    while(1)
    {
        printf("Enter number of row: ");
        scanf("%d", &m);

        if(m <= MAXROW)
        {
           while(1)
            {
                printf("Enter number of column: ");
                scanf("%d", &n);

                if(n <= MAXCOL)
                    break;
                printf("Error: maximum allowed column is %d\n", MAXCOL);
            }
            break;
        }
        printf("Error: maximum allowed row is %d\n", MAXROW);
    }

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            tarr[i][j] = arr[j][i];

    printf("\nThe transpose of matrix\n");
    for(i = 0; i < n; i++)
    {
        printf("|");
        for(j = 0; j < m; j++)
            printf(" %d ", tarr[i][j]);
        printf("|\n");
    }
    return 0;
}
