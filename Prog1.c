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
    int max=arr[0];
    for(int i=0;i<no;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nThe maximum is : %d",max);
    int min=arr[0];
    for(int i=0;i<no;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("\nThe minimum is : %d",min);
    getch();
    return 0;
}