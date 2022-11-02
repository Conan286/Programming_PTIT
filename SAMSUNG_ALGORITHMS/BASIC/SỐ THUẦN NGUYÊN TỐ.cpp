#include<stdio.h>
#include<math.h>
int snt(int n);
int tongchuso(int n);
int chusosnt(int n);
int main()
{
	int t,i,j,a,b;
	scanf("%d",&t);
	while(t--)
	{
		int dem=0;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(snt(i)&&(tongchuso(i))) ++dem;
		}
		printf("%d\n",dem);
	}
}
int snt(int n)
{
	int i;
	for( i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1?1:0;
}
int tongchuso(int n){
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		if(snt(n%10)==0) return 0;
		n=n/10;
	}
	return snt(sum);
}

