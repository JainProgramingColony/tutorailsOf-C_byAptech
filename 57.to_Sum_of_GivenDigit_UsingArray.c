#include <stdio.h>
#include <conio.h>
int main()
{
    float A[10], sum = 0;
    int i;
    system("cls");
    printf("Enter Your All Values ");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &A[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + A[i];
    }
    printf("Sum of All Given Numbers is %f", sum);
    return 0;
}