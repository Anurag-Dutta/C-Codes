#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x,n;
    unsigned long long int val;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    val=pow(x,n);
    printf("%d^%d = %llu",x,n,val);
    getch();
    return 0;
}