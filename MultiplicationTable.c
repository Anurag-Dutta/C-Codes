#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("\n  |    0    1    2    3    4    5    6    7    8    9    10\n");
    for(int i=0;i<=n;i++)
    {
        if(i<10)
        {
            printf(" %d|    ",i);
        }
        else
        {
             printf("%d|    ",i);
        }
            for(int j=0;j<=10;j++)
            {
                printf("%d    ",i*j);
            }
            printf("\n");
    }
    getch();
    return 0;
}