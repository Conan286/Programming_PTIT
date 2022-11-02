#include<stdio.h>
#include<math.h>
int stn(int n)
{
	
int temp=n;
int s=0;
	while(n!=0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	return ((s==temp)?1:0);
}
int snt(int n)
{
	int i;
	for( i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
int main()
{
int n,t,i,sum=0;


scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	sum+=a[i];
}
float result=sum*1.0/n;
printf("%0.3f",result);
}

