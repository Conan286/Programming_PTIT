#include<stdio.h>
#include<string.h>
#include<math.h>
int sum(int n);
int sothuannghich(int n);
int start(int n);
int end(int n);
int chuso6(int n);

int main()
{
	int t,i,j,n,a,b;
	//scanf("%d",&t);
//while(t--){
	//	int dem=0;
	scanf("%d",&n);
for(i=1;i<=n;i++)
{
	int solan=i,k=n,j=i;
	while(solan--)
	{
		printf("%d ",j);
		j=j+(--k);
	}
	printf("\n");
}
}
int sum(int n)
{
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n=n/10;
	}
	return tong%10==8?1:0;
}
int kochuso9(int n)
{
	while(n!=0)
	{
		if(n%10==9) return 0;
		n=n/10;
	}
	return 1;
}
int sothuannghich(int n)
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

