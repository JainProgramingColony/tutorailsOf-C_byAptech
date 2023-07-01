#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    system("cls");
    printf("Enter n Value ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}