#include <stdio.h>
#include <conio.h>
int main()
{
    int i, f = 0, s = 1, next;
    system("cls");
    for (i = 1; i <= 8; i++)
    {
        next = f + s;
        printf("%d\t", next);
        f = s;
        s = next;
    }
    return 0;
}