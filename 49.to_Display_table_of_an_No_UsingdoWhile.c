#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1,n,t;
    system("cls");
    printf("Enter n Value ");
    scanf("%d",&n);
    do
    {
        t=n*i;
        printf("%d\n",t);
        i++;
    }
    while(i<=10);
    return 0;
}