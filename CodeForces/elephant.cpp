#include <stdio.h>
int main()
{
int x;
scanf("%d",&x);

int m = x / 5;
int a = x % 5;

int n = a / 4;
int b = a % 4;

int p = b / 3;
int c = b % 3;

int q = c / 2;
int d = c % 2;


int all = m + n + p + q + d;

 printf("%d\n", all);
return 0;
}
