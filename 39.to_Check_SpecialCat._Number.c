#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, t = 0;
    system("cls");
    printf("Enter n Value ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (n == i * (i + 1))
        {
            t = 1;
        }
    }
    if (t == 1)
    {
        printf("Yes Special Number");
    }
    else
    {
        printf("Not");
    }
    return 0;
}

////// Special Number Mean is : //////
////// 12=3*4 & 6=2*3 : //////