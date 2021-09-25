#include <stdio.h>
#include <conio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}