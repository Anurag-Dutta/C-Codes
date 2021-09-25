#include <stdio.h>
#include <conio.h>

int main()
{
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n");
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a Prime number ",num);
            break;
        }
    }
    if(num==i)
    {
        printf("%d is a Prime number ",num);
    }
    getch ();
    return 0;
}