#include <stdio.h>
#include <conio.h>
int main()
{
    int n, d1, d2, d3, sum;
    system("cls");
    printf("Enter any 3 digit Number ");
    scanf("%d", &n);
    d1 = n % 10;
    n = n / 10;
    d2 = n % 10;
    n = n / 10;
    d3 = n % 10;
    n = n / 10;
    sum = d1 + d2 + d3;
    printf("Sum Of Given Digits is %d", sum);
    return 0;
}