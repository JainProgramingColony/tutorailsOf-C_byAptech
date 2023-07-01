#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, n, t;
    system("cls");
    printf("ENter n Value ");
    scanf("%d", &n);
    while (i <= 10)
    {
        t = n * i;
        printf("%d\n", t);
        i++;
    }
    return 0;
}