#include <stdio.h>
#include <conio.h>
int main()
{
    int A[10], i, n;
    system("cls");
    printf("Enter 10 Array Elements ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the Value foir Delete ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (A[i] != n)
        {
            printf("%d\n", A[i]);
        }
    }
    return 0;
}