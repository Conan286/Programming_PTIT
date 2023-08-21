#include<stdio.h>
int sum(int n)
{
	int tong=0;
	while(n!=0)
	{
		tong+=n%10;
		n=n/10;
	}
	return tong;
}
int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	if(sum(n)%10==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
}


