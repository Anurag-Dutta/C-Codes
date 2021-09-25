#include <stdio.h>
#include <conio.h>

void swap(int *a,int *b)
{
    *a=(*a)+(*b);
    *b=(*a)-(*b);
    *a=(*a)-(*b);
}
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    swap(&num1,&num2);
    printf("\nNumber 1 : %d",num1);
    printf("\nNumber 2 : %d",num2);
    getch();
    return 0;
}