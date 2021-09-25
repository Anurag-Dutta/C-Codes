#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int n=num;
    int rem;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+pow(rem,3);
    }
    if(sum==num)
    {
        printf("%d is Armstrong ",num);
    }
    else
    {
        printf("%d is not Armstrong ",num);
    }
    getch();
    return 0;
}
