#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    system("cls");
    for (i = 0; i <= 5; i++)
    {
        for (k = i + 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}