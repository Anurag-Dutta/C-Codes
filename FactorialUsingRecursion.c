#include <stdio.h>
#include <conio.h>

int factorial(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("%d ! = %d",num,factorial(num));
    getch();
    return 0;
}