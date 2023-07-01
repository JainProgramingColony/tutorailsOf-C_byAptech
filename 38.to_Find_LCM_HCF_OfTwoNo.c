#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, i, GCD, LCM;
    system("cls");
    printf("Enter a Value ");
    scanf("%d", &a);
    printf("Enter b Value ");
    scanf("%d", &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
    }
    LCM = (a * b) / GCD;
    printf("GCD/HCF is %d", GCD);
    printf("\nLCM is %d", LCM);
    return 0;
}