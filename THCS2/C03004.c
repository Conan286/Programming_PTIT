#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
long long fibonacci[33];
fibonacci[0]=0;
fibonacci[1]=1;
for(i=2;i<31;i++)
{
	fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
}
for(i=0;i<n;i++){
	printf("%lld ",fibonacci[i]);
}
}
	


 
