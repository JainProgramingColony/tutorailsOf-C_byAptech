#include <stdio.h>
#include <conio.h>
int main()
{
    float b, h, area;
    system("cls");
    printf("Enter Base & Height value");
    scanf("%f%f", &b, &h);
    area = (b * h) / 2;
    printf("Area of Traingle is %f", area);
    return 0;
}
