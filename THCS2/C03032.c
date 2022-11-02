#include<stdio.h>
#include<math.h>

int snt(int n)
{
	int i;
for( i=2;i<=sqrt(n);i++)
{
	if(n%i==0) return 0;
}
return (n>1?1:0);
}
int test(int n)
{
	if(snt(n)==0) return 0;
	while(n>9)
	{
		if(snt(n%10)==0) return 0;
		n=n/10;
	}
	return (snt(n)==1?1:0);
}

int main()
{
int t;
int a,b,i;
		scanf("%d",&t);
		while(t--)
		{
			int dem=0;
		scanf("%d %d",&a,&b);
		//1<n<7	
		for( i=a;i<=b;i++){
		
		if(test(i)==1){
			dem++;
}
		}
		printf("%d\n",dem);
}
}

