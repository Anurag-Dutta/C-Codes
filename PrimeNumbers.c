#include <stdio.h>
#include <conio.h>
int isPrime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
            break;
        }
    }
    if(num==i)
    {
        return 1;
    }
}
int main()
{
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n");
    if(isPrime(num)==1)
    {
        printf("%d is Prime",num);
    }
    else
    {
        printf("%d is Not Prime",num);
    }
    getch ();
    return 0;
}