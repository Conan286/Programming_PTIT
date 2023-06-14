#include<stdio.h>
#include<math.h>
#define scan(n) scanf("%d",&n);
#define scanll(n) scanf("%lld",&n);
#define ll long long
#define N 93
ll len[N],k;
void init()
{
int i;
len[1]=len[2]=1;
for(i=3;i<N;++i)
len[i]=len[i-1]+len[i-2];
}
char kitu(int n,ll k)
{
if(n==1) return '0';
if(n==2) return '1';
if(k>len[n-2]) return kitu(n-1,k-len[n-2]);
return kitu(n-2,k);
}
int main()
{
int t,n;
init();
scan(t)
while(t--)
{
scan(n) scanll(k)
printf("%c\n",kitu(n,k));
}
}
