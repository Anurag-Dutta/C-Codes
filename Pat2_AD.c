#include <stdio.h>
#include <conio.h>

void Pat2_AD()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int k=2;k<=i;k++)
        {
            printf("  ");
        }
        for(int j=rows;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    Pat2_AD();
    getch();
    return 0;
}