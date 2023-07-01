#include <stdio.h>
#include <conio.h>
int main()
{
    int i, sum = 0;
    system("cls");
    for (i = 2; i < 100; i = i + 2)
        sum = sum + i;
    {
        printf("Sum of All even Numbers b/w 1 to 100 is %d", sum);
    }
    return 0;
}