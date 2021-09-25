#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive",num);
    }
    else
    {
        printf("%d is negative",num);
    }
    getch();
    return 0;
}