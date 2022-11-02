#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int i,t;
	long long fibonacci[100];
	fibonacci[0]=0;
	fibonacci[1]=1;
	for(i=2;i<93;i++)
	{
		fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
	}
	long long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		int id=0;
		for(i=0;i<94;i++)
		{
			if(n==fibonacci[i])
			{
				id=1;
				printf("YES\n");
				break;
			}
		}
		if(id==0) printf("NO\n");
}
	}
