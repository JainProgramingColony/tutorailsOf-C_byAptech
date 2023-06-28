#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, temp;
    system("cls");
    printf("Enter 1st Value ");
    scanf("%d", &a);
    printf("Enter 2nd Value ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Value after Swap...");
    printf("\n 1st Number is %d", a);
    printf("\n 2nd Number is %d", b);
    return 0;
}
