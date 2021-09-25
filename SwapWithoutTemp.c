#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2;
    printf("Enter the 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After Swapping , First Number = %d and Second Number = %d",num1,num2);
    getch();
    return 0;
}