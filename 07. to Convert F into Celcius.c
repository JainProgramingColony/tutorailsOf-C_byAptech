#include <stdio.h>
#include <conio.h>
int main()
{
    float fr, cl;
    system("cls");
    printf("Enter Temprature in Farenite ");
    scanf("%f", &fr);
    cl = (5 * (fr - 32)) / 9;
    printf("Temprature in Celcius is %f", cl);
    return 0;
}