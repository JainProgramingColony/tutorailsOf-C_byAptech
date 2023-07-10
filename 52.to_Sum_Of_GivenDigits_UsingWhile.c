#include <stdio.h>
#include <conio.h>
int main()
{
    int n,r,sum=0;
    system("cls");
    printf("Enter Your 3 digit Number ");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of Given Digit is %d",sum);
    return 0;
}