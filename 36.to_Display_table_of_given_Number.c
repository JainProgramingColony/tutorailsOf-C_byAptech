#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, t;
    system("cls");
    printf("Enter the Number for Table ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        t = n * i;
        printf("%d*%d=%d\n", n, i, t);
    }
    return 0;
}