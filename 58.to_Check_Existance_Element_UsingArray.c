#include <stdio.h>
#include <conio.h>
int main()
{
    int A[10], i, n, t = 0;
    system("cls");
    printf("Enter 10 Array Element ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the Value for Search ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (A[i] == n)
        {
            t = 1;
            break;
        }
    }
    if (t == 1)
    {
        printf("Yes found.....");
    }
    else
    {
        printf("Not found.....");
    }
    return 0;
}