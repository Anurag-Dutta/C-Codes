#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the 3 numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is largest",num1);
        }
        else
        {
            printf("%d is largest",num3);
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("%d is largest",num2);
        }
        else
        {
            printf("%d is largest",num3);
        }
    }
    getch();
    return 0;
}