#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, min, max;
    system("cls");
    printf("Enter 1st Value ");
    scanf("%d", &a);
    printf("Enter 2nd Value ");
    scanf("%d", &b);
    max = a > b ? a : b;
    min = a < b ? a : b;
    printf("Maximun Value is %d", max);
    printf("\nMinimun Value is %d", min);
    return 0;
}