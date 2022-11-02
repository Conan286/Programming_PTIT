#include<stdio.h>
#include<math.h>
#define N 100001
int main()
{
	int snt[401],i,j,id=0,n,t,dem=1;
	int sangsnt[N];
	sangsnt[0]=sangsnt[1]=0;
	for(i=2;i<N;i++)
	{
		sangsnt[i]=1;
	}
	for(i=2;i<sqrt(N);i++)
	{
	for(j=i+i;j<N;j+=i)
	{
	sangsnt[j]=0;
	}
}

for(i=0;i<N;i++)
{
	if(sangsnt[i])
	{
		
		snt[id++]=i;
		if(id>400) break;
	}
}
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
	int a[n][n],ht=0,ct=0,hd=n-1,cd=n-1,k=0;
	while(k<n*n)
	{
		for(i=ct;i<=cd;i++)
		{
			a[ht][i]=snt[k++];
		}
		for(i=ht+1;i<=hd;i++)
		{
			a[i][cd]=snt[k++];
		}
		if(ht<hd)
		{
			for(i=cd-1;i>=ct;i--)
			{
				a[hd][i]=snt[k++];
			}
		}
		if(ct<cd)
		{
			for(i=hd-1;i>ht;i--)
			{
				a[i][ct]=snt[k++];
			}
		}
		ct++;
		ht++;
		cd--;
		hd--;
	}
	printf("Test %d:\n",dem++);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

}



