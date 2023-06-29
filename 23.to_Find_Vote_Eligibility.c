#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    system("cls");
    printf("Enter age ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Yes, You can Vote.....");
    }
    else
    {
        printf("You can't Vote now, Wait %d years.....", (18 - age));
    }

    return 0;
}