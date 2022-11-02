#include<stdio.h>
int a(int n)
{
	switch(n)
	{
		case 1:
			return 1;
			break;
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
			
	}
}
int b(int n)
{
	switch(n)
	{
		case 1:
			return 9;
			break;
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
			
	}
}
int tongchuso(int n)
{
	int sum=0;
	while(n>9)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum+n;
}
int sothuannghich(int n)
{
	int temp=n;
	int s=0;
	while(n!=0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	return (s==temp?1:0);
}
int smm(int n)
{
	if(sothuannghich(n)==0||tongchuso(n)%10!=0) return 0;
	while(n>9)
	{
		if(n%10==4) return 0;
		n=n/10;
	}
	return (n!=4?1:0);
}
void display(int n,int a,int b)

{
	int i;
for	(i=a;i<=b;i++)
{
	if(smm(i))
	printf("%d ",i);
}
}
int main()
{
int t;
int n,i;
		scanf("%d",&t);
		while(t--)
		{
		scanf("%d",&n);
		display(n,a(n),b(n));
		printf("\n");
	}
}
