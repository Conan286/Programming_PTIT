#include<stdio.h>
#define ll long long
#define cin(n) scanf("%d",&n);
#define printll(n) printf("%lld\n",n);
#define for(i,a,b) for(int i=a;i<b;i++)
ll frog[51];
void init()
{
frog[0]=0,frog[1]=1,frog[2]=2,frog[3]=4;
int i;
for(i,4,51)
frog[i]=frog[i-1]+frog[i-2]+frog[i-3];
}
main()
{
init();
int t,n;
cin(t)
while(t--)
{
cin(n)
printll(frog[n])
}
}
