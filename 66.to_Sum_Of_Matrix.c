#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], i, j, sum = 0;
    system("cls");
    printf("Enter Matrix Elments ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nYour Matrix is.....\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + A[i][j];
        }
    }
    printf("Sum of Your Matrix is %d", sum);
    return 0;
}