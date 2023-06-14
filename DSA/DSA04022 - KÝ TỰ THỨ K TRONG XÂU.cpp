#include<stdio.h>
#include<math.h>
#define scan(n) scanf("%d",&n);
#define scanll(n) scanf("%lld",&n);
#define ll long long
#define N 26
ll k;
char kitu(int n,ll k)
{
if(n==1) return 'A';
ll h=pow(2,n-1);
if(k==h) return (char)('A'+n-1);
if(k>h) return kitu(n-1,k-h);
return kitu(n-1,h-k);
}
int main()
{
int t,n;

scan(t)
while(t--)
{
scan(n) scanll(k)
printf("%c\n",kitu(n,k));
}
}
