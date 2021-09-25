#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float base,height,area;
    printf("Enter the Base : ");
    scanf("%f",&base);
    printf("\nEnter the Height : ");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("\nArea = %f",area);
    getch();
    return 0;
}