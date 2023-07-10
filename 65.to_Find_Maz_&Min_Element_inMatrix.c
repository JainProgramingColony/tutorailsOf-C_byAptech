#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], i, j, max, min;
    system("cls");
    printf("Enter Array Element ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    max = A[0][0];
    min = A[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
            else if (A[i][j] < min)
            {
                min = A[i][j];
            }
        }
    }
    printf("Maximun Element is %d", max);
    printf("\nMinimun Element is %d", min);
    return 0;
}