#include<stdio.h>
#include<math.h>
int main()
{
int t,i;
long long n;
scanf("%d",&t);
while(t--)
{
	scanf("%lld",&n);
	long long index=n;
	for(i=2;i<=(int)(sqrt(n));i++)
	{
		while(n%i==0)
		{
			n=n/i;
			index=i;
		}
	}
	if(n!=1){
	
	printf("%lld\n",n);
}
else{
	printf("%lld\n",index);
}
	

}
}

