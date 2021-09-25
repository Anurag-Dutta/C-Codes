#include <stdio.h>
#include <conio.h>

int main()
{
    int divisor,dividend,quotient,remainder;
    printf("Enter the Divisor : ");
    scanf("%d",&divisor);
    printf("\nEnter the Dividend : ");
    scanf("%d",&dividend);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("\nQuotient : %d",quotient);
    printf("\nRemainder : %d",remainder);
    getch();
    return 0;
}