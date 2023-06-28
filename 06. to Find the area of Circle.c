#include <stdio.h>
#include <conio.h>
int main()
{
    float r, area;
    system("cls");
    printf("Enter The Radius Of the Circle");
    scanf("%f", &r);
    area = (3.14 * r * r);
    printf("Area of Circle is %f", area);
    return 0;
}