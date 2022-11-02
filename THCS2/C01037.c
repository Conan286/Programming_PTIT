#include<stdio.h>
#include<math.h>
int main()
{
long long a,b;
scanf("%lld %lld",&a,&b);
long long hieu=abs(a-b)+1;
long long tong=((a+b)*hieu/2);
printf("%lld",tong);
}


