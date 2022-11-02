#include<stdio.h>
#include<math.h>
int sum(int n)
{
	int t=0;
	while(n!=0)
	{
		t+=n%10;
	n=n/10;
	}
	return t;
}

int main()
{
int n;
int i;
scanf("%d",&n);
int temp=n;

	//666
	int tonglt=0;
	//
   for(i=2;i<=sqrt(n);i++)
{
	//2-25
	//2
	//3
	while(n%i==0)
	{
		//n=37
		n=n/i;
		tonglt+=sum(i);//=8+3+7
	}
	
}
if(n!=1)
{
	tonglt+=sum(n);
}
//printf("%d %d %d\n", n,tonglt,sum(temp));
if(tonglt==sum(temp))
{
	
	printf("YES");
}
else{
	printf("NO");
}
}
