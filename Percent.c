#include <stdio.h>
#include <conio.h>

int main()
{
    double marks1,marks2,marks3,marks4,marks5;
    double percent;
    printf("Enter marks in Subject 1 : \n");
    scanf("%lf",&marks1);
    printf("Enter marks in Subject 2 : \n");
    scanf("%lf",&marks2);
    printf("Enter marks in Subject 3 : \n");
    scanf("%lf",&marks3);
    printf("Enter marks in Subject 4 : \n");
    scanf("%lf",&marks4);
    printf("Enter marks in Subject 5 : \n");
    scanf("%lf",&marks5);
    printf("The Sum is : %lf\n",marks1+marks2+marks3+marks4+marks5);
    percent=(marks1+marks2+marks3+marks4+marks5)/5;
    printf("The percent is : %f",percent);
    getch();
    return 0;
}
