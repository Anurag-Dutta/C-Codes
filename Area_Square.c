#include <stdio.h>
#include <conio.h>

int main()
{
    int side;
    printf("Enter the side length : ");
    scanf("%d", &side);
    int area = side * side;
    printf("\nThe area of the square with side length %d is %d", side, area);
    getch();
    return 0;
}