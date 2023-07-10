#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j, k, sum = 0;
    system("cls");
    printf("Enter Array Element for Matrix A ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter Array Element for Matrix B ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + A[i][k] + B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }
    printf("Matrix Multiplication");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", &C[i][j]);
        }
        printf("\n");
    }

    return 0;
}