#include <stdio.h>
#include <conio.h>
int main()
{
    int days;
    system("cls");
    printf("Enter Days Number ");
    scanf("%d", &days);
    switch (days)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednessday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Saturday");
        break;

    default:
        printf("Wrong Number....");
        break;
    }
    return 0;
}