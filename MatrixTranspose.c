/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-23 19:14:14
*/
#include "stdio.h"
#include "conio.h"

int main()
{
    int rows, cols;
    printf("Enter the matrix dimension : ");
    scanf("%d%d", &rows, &cols);
    int arr[rows][cols];
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            printf("\nEnter Element %d%d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe Entered Matrix is : \n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Transposd Matrix is : \n");
    for (int j = 1; j <= cols; j++)
    {
        for (int i = 1; i <= rows; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}