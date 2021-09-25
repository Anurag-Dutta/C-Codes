#include "stdio.h"
#include "conio.h"

int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int arr_cpy[size];
    for(int i=0;i<size;i++)
    {
        arr_cpy[i]=arr[i];
    }
    getch();
    return 0;
}