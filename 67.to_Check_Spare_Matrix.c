#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], i, j, max, min, t = 0;
    system("cls");
    printf("Enter Array Element ");
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
            if (A[i][j] == 0)
            {
                t++;
            }
        }
    }
    if (t >= 3)
    {
        printf("Spare Matrix....");
    }
    else
    {
        printf("\nNot.....");
    }
    return 0;
}