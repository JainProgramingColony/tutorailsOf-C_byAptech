#include <stdio.h>
#include <conio.h>
int main()
{
    float cl, fr;
    system("cls");
    printf("Enter Celcius Value ");
    scanf("%f", &cl);
    fr = (9 * (cl / 5) + 32);
    printf("Temprature in Farenite is %f", fr);
    return 0;
}
