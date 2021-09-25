#include <stdio.h>
#include <conio.h>

void Pat6_AD()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
    }
}
int main()
{
    Pat6_AD();
    getch();
    return 0;
}