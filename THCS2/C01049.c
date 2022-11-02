#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
			scanf("%d",&n);
	int chan=0;
	int le=0;
	while(n!=0)
	{
	(	(n%10)%2==0)?(++chan):(++le);
		n=n/10;
	}
	printf("%d %d\n",le,chan);
}
}
