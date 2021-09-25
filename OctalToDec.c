#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int bin,sum=0;
    printf("Enter the Number in Octal Format : ");
    scanf("%d",&bin);
    int num=bin,rem;
    int i=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*pow(8,i));
        num=num/10;
        ++i;
    }
    printf("\nDecimal Format : %d",sum);
    getch();
    return 0;
}