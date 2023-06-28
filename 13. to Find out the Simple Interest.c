#include <stdio.h>
#include <conio.h>
int main()
{
    float p, r, t, R;
    system("cls");
    printf("Enter Principle Amount ");
    scanf("%f", &p);
    printf("Enter Rate ");
    scanf("%f", &r);
    printf("Enter Time ");
    scanf("%f", &t);
    R = (p * r * t) / 100;
    printf("Result Value is %f", R);
    return 0;
}