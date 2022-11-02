#include<stdio.h>

int main()
{
long long n;
int i;
scanf("%lld",&n);
int dem[10];
for(i=0;i<10;i++)
{
	dem[i]=0;
}
while(n!=0)
{
	dem[n%10]++;
	n=n/10;
}
for( i=0;i<8;i++)
{
	if((i==2||i==3||i==5||i==7)&&dem[i]>0)
	{
		printf("%d %d\n",i,dem[i]);
	}
}
}
