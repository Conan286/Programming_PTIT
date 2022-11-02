#include<stdio.h>
int main()
{
int n,y,m,d;
scanf("%d",&n);
y=n/365;
m=(n-y*365)/7;
d=n-m*7-y*365;
printf("%d %d %d",y,m,d);
}
