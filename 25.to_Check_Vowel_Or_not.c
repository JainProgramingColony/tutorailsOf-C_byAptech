#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    system("cls");
    printf("Enter ch Value ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Vowel...");
    }
    else 
    { 
        printf("Consonant...");
    }
    return 0;
}