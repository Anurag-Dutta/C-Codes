#include <stdio.h>
#include <conio.h>

int power(int base, int pow)
{
    int answer=1;
    while(pow>=1)
    {
        answer = answer*base;
        pow--;
    }
    return answer;
}
int main()
{
    int b,p;
    printf("Enter the Base : ");
    scanf("%d",&b);
    printf("\nEnter the Power : ");
    scanf("%d",&p);
    printf("\n%d^%d=%d",b,p,power(b,p));
    getch();
    return 0;
}