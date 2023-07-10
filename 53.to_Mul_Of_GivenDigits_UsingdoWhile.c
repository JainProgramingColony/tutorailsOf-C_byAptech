#include <stdio.h>
#include <conio.h>
int main()
{
    int n, r, mul = 1;
    system("cls");
    printf("Enter Your for Multiply ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        mul = mul * r;
        n = n / 10;
    }
    printf("Multiply of Given Number is %d", mul);
    return 0;
}