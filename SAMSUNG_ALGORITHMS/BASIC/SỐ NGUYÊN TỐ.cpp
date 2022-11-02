#include<stdio.h>
#include<math.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1000001
#define cin(n) scanf("%d",&n);
int snt(int n)
{
int k=sqrt(n),i;
for( i=2;i<=k;i++)
if(n%i==0)
return 0;
return n>1?1:0;
}
int main()
{
int t,n;
cin(t)
while(t--)
{
	cin(n)
	if(snt(n)) yes
	else no
}
}
