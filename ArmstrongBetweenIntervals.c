#include <stdio.h>
#include <conio.h>
#include <math.h>

int armstrong(int num)
{
    int sum = 0;
    int n = num;
    int rem;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + pow(rem, 3);
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int lowerlim, upperlim;
    printf("Enter the Upper Limit : ");
    scanf("%d", &upperlim);
    printf("\nEnter the Lower Limit : ");
    scanf("%d", &lowerlim);
    for (int i = lowerlim; i <= upperlim; i++)
    {
        if (armstrong(i) == 1)
        {
            printf("\n%d is Armstrong", i);
        }
    }
    getch();
    return 0;
}