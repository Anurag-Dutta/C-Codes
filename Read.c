/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-13 20:48:58
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch, file_name[25], freq_ch, freq = 0;
    FILE *fp;
    printf("Enter name of the file: ");
    gets(file_name);
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        perror("Error!!!.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nEnter the Character whose frquency is to be calculated: ");
    scanf("%c", &freq_ch);
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == freq_ch)
        {
            freq++;
        }
    }
    printf("\nThe Frequency is: %d", freq);
    fclose(fp);
    getch();
    return 0;
}
