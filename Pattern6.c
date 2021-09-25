#include <stdio.h>
#include <conio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=((2*i)-1);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

