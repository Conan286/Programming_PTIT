#include<stdio.h>
#define scan(n) scanf("%d",&n);
#define scanll(n) scanf("%lld",&n);
#define ll long long
#define N 93
ll len[N],k;
void init()
{
len[2]=len[1]=1;
int i;
for(i=3;i<N;++i)
len[i]=len[i-2]+len[i-1];
}
char kitu(int n,ll k)
{
if(n==1) return 'A';
if(n==2) return 'B';
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
