#include <stdio.h>
#include <conio.h>
int main()
{
    int A[10], i, j, temp;
    system("cls");
    printf("Enter 10 Array Element ");
    for (i = 0; i <= 10; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("After Shorting \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}