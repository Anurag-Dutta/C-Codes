/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-22 12:18:02
*/
#include <stdio.h>
#include <conio.h>
void swap(int *num1, int *num2)
{
    *num1 = *num1 ^ *num2;
    *num2 = *num2 ^ *num1;
    *num1 = *num2 ^ *num1;
}
int main()
{
    int n;
    printf("Enter the Value of n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < (n / 2); i++)
    {
        swap(&arr[i], &arr[n - 1 - i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    getch();
    return 0;
}