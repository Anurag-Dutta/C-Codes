#include <stdio.h>
#include <conio.h>

struct student
{
    char firstName[100];
    unsigned long long int roll;
    char stream[100];
} s[100];

int main()
{
    int n, count = 0;
    unsigned long long check;
    printf("Enter the number of Students : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n\n*****Enter details of Student %d*****", i);
        printf("\nName : ");
        scanf("%s", &s[i].firstName);
        printf("\nRoll Number : ");
        scanf("%llu", &s[i].roll);
        printf("\nStream : ");
        scanf("%s", &s[i].stream);
    }
    printf("\n\n\n");
    printf("Enter the Student Roll Number : ");
    scanf("%llu", &check);
    for (int i = 1; i <= n; i++)
    {
        if (s[i].roll == check)
        {
            printf("\nName : ");
            printf("%s", s[i].firstName);
            printf("\nRoll Number : ");
            printf("%llu", s[i].roll);
            printf("\nStream : ");
            printf("%s", s[i].stream);
        }
        else
        {
            count++;
        }
    }
    if (count == n)
    {
        printf("\nNo Records Found ! ");
    }
    getch();
    return 0;
}
/*
printf("\nName : ");
        printf("%s",s[i].firstName);
        printf("\nRoll Number : ");
        printf("%llu",s[i].roll);
        printf("\nStream : ");
        printf("%s",s[i].stream);
*/