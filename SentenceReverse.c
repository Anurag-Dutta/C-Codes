#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char sentence[100000];
    printf("Enter the Sentence : ");
    gets(sentence);
    int i=strlen(sentence),j=i;
    printf("\nThe Reversed Sentence is : ");
    while(j>=0)
    {
        printf("%c",sentence[i]);
        j--;
        i--;
    }
    getch();
    return 0;
}