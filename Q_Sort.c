#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) //Prerequisite for the qsort function
{
   return ( (int)a - (int)b );
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d ",&arr[i]);
        }
        qsort(arr, 3, sizeof(int), cmpfunc);//Inbuilt sort function in C
        printf("%d\n",arr[1]);
    }
    return 0;
}