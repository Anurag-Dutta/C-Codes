#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float side1,side2,side3;
    printf("Enter the 3 Sides : ");
    printf("\nSide 1 : ");
    scanf("%f",&side1);
    printf("\nSide 2 : ");
    scanf("%f",&side2);
    printf("\nSide 3 : ");
    scanf("%f",&side3);
    float s=((side1+side2+side3)/2);
    float area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("Area = %f",area);
    getch();
    return 0;
}