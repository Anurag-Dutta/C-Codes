#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("How many Numbers ? ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter Number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The Largest Number is : %d",max);
    getch();
    return 0;
}