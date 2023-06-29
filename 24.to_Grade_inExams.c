#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    system("cls");
    printf("Enter Your Marks ");
    scanf("%d", &n);
    if (n > 90)
    {
        printf("A Grade ");
    }
    else if (n > 80)
    {
        printf("B Grade ");
    }
    else if (n > 70)
    {
        printf("C Grade ");
    }
    else if (n > 60)
    {
        printf("D Grade ");
    }
    else if (n >= 33)
    {
        printf("Just Pass ");
    }
    else if (n < 33)
    {
        printf("Fail ");
    }
    return 0;
}