#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], i, j, f;
    system("cls");
    printf("Enter Array Element for Matrix ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nMatrix Diagonal Element..... ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == f)
            {
                printf("%d\n", A[i][j]);
            }
        }
    }
    return 0;
}