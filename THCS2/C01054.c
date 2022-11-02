#include<stdio.h>
#include<math.h>
#define N 1000001


long long sumuoc(int n);

int main(){
	int t,n;
	scanf("%d",&t);
	long long tong=0;
	while(t--)
	{
		scanf("%d",&n);
		tong+=sumuoc(n);
	}
printf("%lld",tong);
}


long long sumuoc(int n)
{
	if(n==1) return 0;
	long long sum=0;
		
		int i;
		for(i=2;i<=sqrt(n);i++)
		{
		
			while(n%i==0)
			{
				sum+=i;
	       n=n/i;
	   }
	       }
	       if(n!=1) sum+=n;
return sum;
}














