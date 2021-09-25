#include <stdio.h>
#include <conio.h>

void Pat10_AD()
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
        int ch=64+(2*i)-1;
        for(int k=1;k<=((2*i)-1);k++)
        {
            printf("%c ",ch);
            ch--;
        }
        printf("\n");
    }
}
int main()
{
    Pat10_AD();
    getch();
    return 0;
}