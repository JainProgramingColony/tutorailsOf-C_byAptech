#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    system("cls");
    printf("Enter n Value ");
    scanf("%d", &n);
    if (n >= 10 && n <= 100)
    {
        printf("Yes n is a Valid Number");
    }
    else
    {
        printf("n is not Valid");
    }
    return 0;
}