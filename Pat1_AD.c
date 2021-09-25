#include <stdio.h>
#include <conio.h>

void Pat1_AD()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    Pat1_AD();
    getch();
    return 0;
}