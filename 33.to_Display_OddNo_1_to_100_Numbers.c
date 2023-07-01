#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    system("cls");
    for (i = 0; i <= 100; i++)
    {
        if (i % 2 == 1)
            printf("%d\t", i);
    }
    return 0;
}