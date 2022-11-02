#include<stdio.h>
#include<math.h>
#define N 100001

int main()
{
	long long fibonacci[82];
int i;
fibonacci[0]=0,fibonacci[1]=1;
for(i=2;i<82;i++)
{
	fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
}
	int n;
	scanf("%d",&n);
	int a[n][n];
	int j,ht=0,ct=0,hd=n-1,cd=n-1,id=0;
	while(id<n*n)
	{
		for(i=ct;i<=cd;i++)
		{
		  a[ht][i]=fibonacci[id++];
	}
		for(i=ht+1;i<=hd;i++) 
		{
		a[i][cd]=fibonacci[id++];
	}
		if(ht<hd)
		{
			for(i=cd-1;i>=ct;i--){
			 a[hd][i]=fibonacci[id++];
		}
	}
			if(ct<cd) 
		{
			for(i=hd-1;i>ht;i--) {
			a[i][ct]=fibonacci[id++];
		}
		}
		cd--;
		ct++;
		ht++;
		hd--;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
}
	}
	

