#include <stdio.h>
#include <conio.h>

int main()
{
    int dec,count=0;
    printf("Enter the Value : ");
    scanf("%d",&dec);
    printf("\n");
    int quotient=dec,remainder;
    int decdummy=dec;
    int quotientdummy=decdummy,remainderdummy;
    while(quotientdummy!=0)
    {
        remainderdummy=quotientdummy%2;
        quotientdummy/=2;
        count++;
    }
    int c=count;
    int arr[count];
    while(quotient!=0)
    {
        remainder=quotient%2;
        quotient/=2;
        arr[count-1]=remainder;
        count--;
    }
    for(int i=0;i<c;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
    return 0;
}