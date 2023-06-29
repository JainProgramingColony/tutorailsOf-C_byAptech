#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    system("cls");
    printf("Enter n Value ");
    scanf("%d", &n);
    if (n % 10 == 7 || n % 7 == 0)
    {
        printf("Yes, you are Write");
    }
    else
    {
        printf("No");
    }
    return 0;
}