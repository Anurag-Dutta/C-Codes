#include <stdio.h>
#include <conio.h>

int main()
{
    int dim,counter=1;
    printf("Enter the required dimension(dim*dim) : ");
    scanf("\n%d",&dim);
    int arr[dim][dim];
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            int storage;
            printf("Enter Element (%d,%d) ",i,j);
            scanf("%d",&storage);
            arr[i][j]=storage;
        }
    }
    printf("The Entered 2D array is : \n");
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            int storage;
            storage=arr[i][j];
            printf("%d",storage);
            printf(" ");
        }
        printf("\n");
    }
    printf("The Diagonal Elements are : \n");
    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            int storage;
            storage=arr[i][j];
            if(i==j)
            {
                printf("%d",storage);
                printf(" ");
            }
            else
            {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}