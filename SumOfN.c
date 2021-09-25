#include <stdio.h>
#include <conio.h>

int sum(int n)
{
    if(n!=0)
    {
        return (n+sum(n-1));
    }
    else
    {
        return n;
    }
}
int main()
{
    int num;
    printf("Enter the value of N : ");
    scanf("%d",&num);
    printf("The Sum is  : %d",sum(num));
    getch();
    return 0;
}