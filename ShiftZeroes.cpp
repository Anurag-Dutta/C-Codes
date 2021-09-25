/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-29 04:11:50
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int size;
    printf("Enter the Size of the Array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int digit;
    printf("\nEnter the Character which you wish to shift: ");
    scanf("%d", &digit);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == digit)
        {
            count++;
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d", digit);
    }
    getch();
    return 0;
}
