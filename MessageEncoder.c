#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char sentence[1000000];
    printf("Enter the Sentence : ");
    gets(sentence);
    for(int i=0;i<strlen(sentence);i++)
    {
        printf("%d ",sentence[i]);
    }
    getch();
    return 0;
}