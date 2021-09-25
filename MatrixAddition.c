/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-23 19:05:16
*/
#include "stdio.h"
#include "conio.h"

int main()
{
    int row1, col1, row2, col2;
    printf("Enter the dimension of the matrix 1 : ");
    printf("\nEnter the number of rows : ");
    scanf("%d", &row1);
    printf("\nEnter the number of columns : ");
    scanf("%d", &col1);
    int matrix1[row1][col1];
    for (int i = 1; i <= row1; i++)
    {
        for (int j = 1; j <= col1; j++)
        {
            printf("\nEnter element (%d,%d)", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the dimension of the matrix 2 : ");
    printf("\nEnter the number of rows : ");
    scanf("%d", &row2);
    printf("\nEnter the number of columns : ");
    scanf("%d", &col2);
    int matrix2[row1][col1];
    for (int i = 1; i <= row2; i++)
    {
        for (int j = 1; j <= col2; j++)
        {
            printf("\nEnter element (%d,%d)", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    if (row1 == row2 && col1 == col2)
    {
        printf("\nRequired Matrix : \n");
        for (int i = 1; i <= row1; i++)
        {
            for (int j = 1; j <= col1; j++)
            {
                printf("%d  ", matrix1[i][j] + matrix2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix Addition is not possible");
    }
    getch();
    return 0;
}