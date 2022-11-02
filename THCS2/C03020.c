#include<stdio.h>
#include<string.h>
#include<math.h>
int sum(long long n);
int sothuannghich(long long n);
int start(int n);
int end(int n);
int chuso6(long long n);

int main()
{
	long long t,i,j,n,a,b;
	//scanf("%d",&t);
//while(t--){
		int dem=0;
	scanf("%lld %lld",&a,&b);
	long long min=a<b?a:b,max=a>b?a:b;
	for(i=min;i<=max;i++)
	{
		if(sum(i)&&sothuannghich(i)&&chuso6(i)) 
	
	printf("%lld ",i);
}
}
int sum(long long n)
{
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n=n/10;
	}
	return tong%10==8?1:0;
}
int chuso6(long long n)
{
	while(n!=0)
	{
		if(n%10==6) return 1;
		n=n/10;
	}
	return 0;
}
int sothuannghich(long long n)
{
	int temp=n,s=0;
	while(n!=0){
		s=s*10+(n%10);
		n=n/10;
	}
	return temp==s?1:0;
}
int start(int n)
{
	switch(n){
	
	case 2:
		return 10;
		break;
		case 3:
		return 100;
		break;
		case 4:
		return 1000;
		break;
		case 5:
		return 10000;
		break;
		case 6:
		return 100000;
		break;
		case 7:
		return 1000000;
		break;
		case 8:
			return 10000000;
			break;
			case 9:
				return 100000000;
				break;
}
}
int end(int n)
{
	switch(n)
	{
	
	case 2:
		return 99;
		break;
		case 3:
		return 999;
		break;
		case 4:
		return 9999;
		break;
		case 5:
		return 99999;
		break;
		case 6:
		return 999999;
		break;
		case 7:
		return 9999999;
		break;
		case 8:
			return 99999999;
			break;
			case 9:
				return 999999999;
				break;
}
}

