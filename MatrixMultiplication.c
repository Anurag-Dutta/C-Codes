#include <stdio.h>
#include <conio.h>

int main()
{
    int row1, col1, row2, col2, sum = 0;
    printf("Enter the dimension of the matrix 1 : ");
    printf("\nEnter the number of rows : ");
    scanf("%d", &row1);
    printf("\nEnter the number of columns : ");
    scanf("%d", &col1);
    int matrix1[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
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
    int mul[row1][col1];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("\nEnter element (%d,%d)", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nMatrix 1 : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2 : \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    if (col1 != row2)
    {
        printf("\nMatrix Multiplication is not possible");
    }
    else
    {
        printf("\nMatrix Product : \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < col2; k++)
                {
                    mul[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}