#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    int rem;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        printf("%d",rem);
    }
    getch();
    return 0;
}