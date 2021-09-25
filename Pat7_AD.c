#include <stdio.h>
#include <conio.h>

void Pat7_AD()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    int ch=64+rows;
    for(int i=rows;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}
int main()
{
    Pat7_AD();
    getch();
    return 0;
}