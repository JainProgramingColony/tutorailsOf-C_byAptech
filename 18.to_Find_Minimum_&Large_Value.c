#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    system("cls");
    printf("Enter a Value ");
    scanf("%d", &a);
    printf("Enter b Value ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("Yes, a is large");
    }
    else
    {
        printf("b is large");
    }
    return 0;
}