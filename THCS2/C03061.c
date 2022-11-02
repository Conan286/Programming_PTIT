#include<stdio.h>
#include<math.h>
int stn(long long n)
{
	
	long temp=n;
	long long s=0;
	while(n!=0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	return ((s==temp)?1:0);
}
int dk(long long n)
{
int r=(int)(n%10);
while(n>9)
{
	n=n/10;
}
int l=(int)(n);
return (((l%r==0&&l/r==2)||(r%l==0&&r/l==2))?1:0);
}
long long sogiua(long long n)
{
	int dem=1;
	long long temp=n;
	while(n>9)
	{
		dem++;
		n=n/10;
	}
	return ((temp-n*pow(10,dem-1))/10);
}
int main()
{
int t;
long long n;

scanf("%d",&t);
while(t--)
{	
	scanf("%lld",&n);
	
if(stn(sogiua(n))==1&&dk(n)==1)
{
	printf("YES\n");
}
else{
	printf("NO\n");
}
}
}

