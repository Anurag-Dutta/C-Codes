#include <stdio.h>
#include <conio.h>

void Pat3_AD()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=rows-1;j>=i;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=((2*i)-1);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    Pat3_AD();
    getch();
    return 0;
}