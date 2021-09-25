#include <stdio.h>
#include <conio.h>

void Pat5_AD()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    int ch=64+rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}
int main()
{
    Pat5_AD();
    getch();
    return 0;
}