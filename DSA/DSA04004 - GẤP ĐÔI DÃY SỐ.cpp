#include<stdio.h>
#include<math.h>
#define scan(n) scanf("%d",&n);
#define scanll(n) scanf("%lld",&n);
#define ll long long
#define N 51
ll k;

int kitu(int n,ll k)
{
if(n==1) return 1;
ll mid=pow(2,n-1);
if(k==mid) return n;
if(k>mid) return kitu(n-1,k-mid);
return kitu(n-1,mid-k);

}
int main()
{
int t,n;

scan(t)
while(t--)
{
scan(n) scanll(k)
printf("%d\n",kitu(n,k));
}
}
