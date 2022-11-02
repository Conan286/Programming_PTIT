#include<stdio.h>
#include<math.h>
int sum(int n)
{
	int t=0;
	while(n!=0)
	{
		t+=n%10;
	n=n/10;
	}
	return t;
}

int main()
{
int n,t;
int i;
scanf("%d",&t);
long long f[93];
f[0]=0;
f[1]=f[2]=1;
for( i=3;i<93;i++)
{
	f[i]=f[i-1]+f[i-2];
}
while(t--){

scanf("%d",&n);
printf("%lld\n",f[n]);

}
}
