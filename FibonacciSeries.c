#include <stdio.h>
#include <conio.h>

int main()
{
    int range,sequence;
    printf("Enter the value of n : ");
    scanf("%d",&range);
    int a=0,b=1;
    printf("%d   %d",a,b);
    for(int i=1;i<=range-2;i++)
    {
        sequence=a+b;
        a=b;
        b=sequence;
        printf("   %d",sequence);
    }
    getch();
    return 0;
}