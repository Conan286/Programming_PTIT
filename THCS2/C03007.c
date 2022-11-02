#include<stdio.h>
#include<math.h>
int stn(int n)
{
	
int temp=n;
int s=0;
	while(n!=0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	return ((s==temp)?1:0);
}
int snt(int n)
{
	int i;
	for( i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
int main()
{
int t,i;
int a,b;

scanf("%d",&t);
while(t--)
{	
	scanf("%d %d",&a,&b);
	int dem=0;
	for( i=a;i<=b;i++){
	
if(stn(i)==1&&snt(i)==1)
{
	dem++;
	printf("%d ",i);
	if(dem%10==0&&dem>0)
	{
		printf("\n");
	}
}

	

}
printf("\n");
}
}

