#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    system("cls");
    printf("Enter Traffic Light Colour Frist Letter ");
    scanf("%c", &ch);
    if (ch == 'r' || ch == 'R')
    {
        printf("Stop due to Red Light....");
    }
    else if (ch == 'y' || ch == 'Y')
    {
        printf("Ready to Go.......");
    }
    else if (ch == 'g' || ch == 'G')
    {
        printf("You can Go........");
    }
    return 0;
}