#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <wchar.h>
#define max_two(a, b) (a < b ? b : a)
#define min_two(a, b) ((a > b) ? b : a)
#define min_three(a,b,c) ((a)<(b)?((a)<(c)?(a):(c)):((b)<(c)?(b):(c)))
#define max_three(a,b,c) ((a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c)))
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
int ispalindrome(int n)
{
    int a = 0;int b = n;while (n > 0){a = a * 10 + (n % 10);n = n / 10;}if (a == b)return 1;else return 0;
}
int isprime(int n)
{
    if (n == 1)return 0;for (int i = 2; i < sqrt(n); i++){if (n % i == 0){return 0;}}return 1;
}
int reverse(int n)
{
    int rem, rev = 0;while (n > 0){rem = n % 10;rev = rev * 10 + rem;n = n / 10;}return rev;
}
int cmpfunc (const void * a, const void * b) //Prerequisite for the qsort function
{
   return ( (int)a - (int)b );
}
int gcd(int a, int b) 
{
   if (b == 0)return a;return gcd(b, a % b);
}
int fact(int n)
{
    int res = 1;for (int i = 2; i <= n; i++)res = res * i;return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    printf("Hello World !"));
    //qsort(arr_name, arr_size, sizeof(arr_type), cmpfunc);//Inbuilt sort function in C
    getch();
    return 0;
}