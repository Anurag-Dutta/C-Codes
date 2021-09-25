#include "stdio.h"
#include "conio.h"

int main()
{
    int arr[3][3];
    printf("Enter the Array Elements: ");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nRow Major Array: \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf(" in Row %d\n", j + 1);
    }
    getch();
    return 0;
}