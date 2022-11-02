#include<stdio.h>
#include<math.h>

int main()
{
int n,t,i,sum=0;
scanf("%d",&t);
while(t--)
{


scanf("%d",&n);
int tich=1;
for(i=2;i<=sqrt(n);i++)
{
	if(n%i==0)
	{
		tich*=i;
	}
	while(n%i==0)
	{
		
		n=n/i;
	}
	
}
if(n!=1){
	tich*=n;
}
printf("%d\n",tich);
}
}

