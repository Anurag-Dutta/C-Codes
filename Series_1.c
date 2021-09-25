#include <stdio.h>
#include <conio.h>

int fact(int num)
{
    if(num==1||num==0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
int main()
{
    int n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("(%d X %d! - %d) + ",i,i+2,i+i+2+1);
        }
        else
        {
            printf("(%d X %d! - %d) = ",i,i+2,i+i+2+1);
        }
        sum+=i*fact(i+2)-(i+i+2+1);
    }
    printf("%d",sum);
    getch();
    return 0;
}