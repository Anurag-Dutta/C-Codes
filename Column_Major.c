#include "stdio.h"
#include "conio.h"

int main()
{
    int j, k, x[3][3];
    printf("Enter the Array Elements: ");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("\nColumn Major Array: \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d", x[j][i]);
        }
        printf(" in Column [%d]\n", i + 1);
    }
    getch();
    return 0;
}