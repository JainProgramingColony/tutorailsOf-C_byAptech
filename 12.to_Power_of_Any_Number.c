#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float n, t, R;
    system("cls");
    printf("Enter n Value ");
    scanf("%f", &n);
    printf("Enter Power ");
    scanf("%f", &t);
    R = pow(n, t);
    printf("Result Value is %f", R);
    return 0;
}
