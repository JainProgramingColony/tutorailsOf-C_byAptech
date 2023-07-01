#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    system("cls");
    for (i = 0; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" *", i);
        }
        printf("\n");
    }
    return 0;
}