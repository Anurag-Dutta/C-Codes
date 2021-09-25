/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-23 19:09:03
*/
#include "stdio.h"
#include "conio.h"

int main()
{
    int row, col;
    printf("Enter the dimension of the matrix 1 : ");
    printf("\nEnter the number of rows : ");
    scanf("%d", &row);
    printf("\nEnter the number of columns : ");
    scanf("%d", &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nEnter element (%d,%d)", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] != 0)
            {
                count++;
            }
        }
    }
    printf("\nThe number of Non-Zero Elements in the Matrix is %d", count);
    getch();
    return 0;
}