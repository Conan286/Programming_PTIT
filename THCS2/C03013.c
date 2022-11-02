#include<stdio.h>
int ucln(long long a,long long b)
{
	long long i;
	for(i=a<b?a:b;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			return i;
		}
	}
}
int main()
{
	int t;
	long long a,b;
		scanf("%d",&t);
		while(t--){		
	scanf("%lld %lld",&a,&b);
printf("%lld\n",a*b/ucln(a,b));
printf("%lld\n",ucln(a,b));
}
}
    
 
