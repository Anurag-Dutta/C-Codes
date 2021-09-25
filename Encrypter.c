#include <stdio.h>
#include <conio.h>
#include <string.h>

int DecToBin(int dec)
{
    int bno=0,rem,f=1;
    while(dec != 0)
    {
      rem = dec % 2;
      bno = bno + rem * f;
      f = f * 10;
      dec = dec / 2;
    }
    return bno;
}
int main()
{
    char sentence[100000];
    int ascii[100000];
    printf("Enter the Sentence : ");
    gets(sentence);
    for(int i=0;i<strlen(sentence);i++)
    {
        ascii[i]=sentence[i];
    }
    printf("\n\nBinary Equivalent : ");
    for(int i=0;i<strlen(sentence);i++)
    {
        printf("%d ",DecToBin(ascii[i]));
    }
    getch();
    return 0;
}