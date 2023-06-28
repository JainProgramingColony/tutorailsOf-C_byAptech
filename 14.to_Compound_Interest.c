#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a, r, t, R;
    system("cls");
    printf("Enter Amount ");
    scanf("%f", &a);
    printf("Enter Rate  ");
    scanf("%f", &r);
    printf("Enter Time ");
    scanf("%f", &t);
    R = a * pow((1 + (r / 100)), t);
    printf("Result Value is %f", R);
    return 0;
}
