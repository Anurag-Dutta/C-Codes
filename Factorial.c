#include <stdio.h>
#include <conio.h>

int main()
{
    int num,fact=1;
    printf("Enter any Number : ");
    scanf("%d",&num);
    for(int i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("%d! = %d",num,fact);
    getch();
    return 0;
}