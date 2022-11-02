#include<stdio.h>
int souuthechan(long long n)
{
	if(n%2!=0) return 0;
	int chan=0,le=0;
	while(n!=0)
	{
		(n%2==0)?(++chan):(++le);
		n=n/10;
	}
	return (chan>le?1:0);
}
int main()
{
int t,i;
long long n;
scanf("%d",&t);

while(t--)
{
	
scanf("%lld",&n);

if(souuthechan(n)==1){
	printf("YES\n");
}
else{
	printf("NO\n");
}
}
}

