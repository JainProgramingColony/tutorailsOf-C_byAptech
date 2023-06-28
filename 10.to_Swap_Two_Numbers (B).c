#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    system("cls");
    printf("Enter 1st Value ");
    scanf("%d", &a);
    printf("Enter 2nd Value ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value after Swap....");
    printf("\n1st Value is %d", a);
    printf("\n2nd Value is %d", b);
    return 0;
}
