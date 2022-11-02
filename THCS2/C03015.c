#include<stdio.h>
#include<math.h>
#define N 1000001
int sum(int n);
int tcschc5(int n);
int main(){
	int t;
	long long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		int i,id,k=(int)sqrt(n);
		for(i=2;i<=k;i++)
		{
			while(n%i==0)
			{
				n=n/i;
				id=i;
			}
		}
		if(n!=1){
			printf("%lld\n",n);
		}
		else{
			printf("%d\n",id);
		}
	}
}
















int sum(int n){
	int tong=0;
	while(n!=0)
	{
		tong+=n%10;
		n=n/10;
	}
	return tong;
}
int tcschc5(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return (sum(n)%5==0?1:0);
}


