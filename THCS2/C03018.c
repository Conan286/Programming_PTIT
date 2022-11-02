#include<stdio.h>
#include<math.h>
int snt(int n)
{ 
int i;
	for( i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
int sum(int n)
{
	int t=0;
	while(n!=0){
		t+=n%10;
		n=n/10;
	}
	return t;
}
int fibonacci(int n)
{
	if(n==1||n==2||n==3||n==5||n==8||n==13||n==21||n==34) return 1;
	return 0;
}
int main()
{

int a,b,i;
		scanf("%d %d",&a,&b);
		
int max=a>b?a:b;
int min=a<b?a:b;
for( i=min;i<=max;i++)
{
	if(fibonacci(sum(i))==1&&snt(i)==1)
	{
		printf("%d ",i);
	}
}
}
 


