#include <stdio.h>
#include <conio.h>

int main()
{
    int num,n,rem,counter=0,ndummy,remdummy,i=0,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    ndummy=num;
    while(ndummy!=0)
    {
        remdummy=ndummy%10;
        ndummy=ndummy/10;
        counter++;
    }
    n=num;
    int arr[counter-1],arrcheck[counter-1];
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        arr[i]=rem;
        arrcheck[counter-1-i]=rem;
        i++;
    }
    for(int j=0;j<=counter-1;j++)
    {
        if(arr[j]==arrcheck[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count==counter)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Non Palindrome");
    }
    getch();
    return 0;
}