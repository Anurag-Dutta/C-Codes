#include <stdio.h>
#include <conio.h>

void Pat8_AD()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            int ch=65;
            printf("%c ",ch+j-1);
        }
        printf("\n");
    }
}
int main()
{
    Pat8_AD();
    getch();
    return 0;
}