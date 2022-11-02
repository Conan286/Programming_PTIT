#include<stdio.h>
#include<math.h>

int main()
{
int n,t,i,sum=0;
scanf("%d",&t);
while(t--)
{


scanf("%d",&n);
int dem=(n%2==0)?1:0;
for(i=2;i<=sqrt(n);i++)
{
	//12
	//i tu 2-3
	//i=2
	if(n%i==0&&i%2==0)
	{
		dem++;
	}
	if(n%i==0&&(n/i)!=i&&(n/i)%2==0){
	dem++;
	}
	
}

printf("%d\n",dem);
}
}

