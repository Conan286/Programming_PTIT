#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define nhap(n) scanf("%d",&n)
#define xuat(n) printf("%d\n",n)
bool snt(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return n>1;
}
long long bcnn(int x,int n)
{
	int temp=x;
	while(temp<n)
	{
		if(temp*x>n) return temp;
		temp*=x;
		
	}
	return temp;
}
long long rs(int n)
{
	long long result=1;
	int i;
	for(i=2;i<=n;i++) {
	if(snt(i))
	result*=bcnn(i,n);
}
	return result;
}
int main()
{
	int t,i;
	nhap(t);
	while(t--)
	{
		int n;
		nhap(n);
		
		printf("%lld\n",rs(n));
	}
}

