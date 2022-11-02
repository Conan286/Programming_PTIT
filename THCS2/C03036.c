#include<stdio.h>
#include<math.h>
int stnl(long long n)
{
	int sum=0;
	long temp=n;
	long long s=0;
	while(n!=0)
	{
		
		if((n%10)%2==0) return 0;
		s=s*10+(n%10);
		sum+=(int)(n%10);
		n=n/10;
	}
	return ((s==temp&&sum%2!=0)?1:0);
}
int main()
{
int t;
long long n;

scanf("%d",&t);
while(t--)
{	
	scanf("%lld",&n);
if(stnl(n))
{
	printf("YES\n");
}
else{
	printf("NO\n");
}
}
}

