#include <stdio.h>
#include <conio.h>

int main()
{
    int no;
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&no);
    int arr[no];
    for(int i=0;i<no;i++)
    {
        printf("\nEnter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int index;
    printf("\nEnter the index from which you want to remove element : ");
    scanf("%d",&index);
    for(int i=index-1;i<=no;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("\nThe New Array is : ");
    for(int i=0;i<=no-2;i++)
    {
        printf("\n%d",arr[i]);
    }
    getch();
    return 0;
}