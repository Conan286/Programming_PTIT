	#include<stdio.h>
	int main()
	{
		int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=(i%2==0?2:1);j<=(i%2==0?2*i:2*i-1);j+=2)
		{
			/*
1             i=1  j=1;j<=i
24            i=2 
135           i=3
2468          i=4 
13579         i=5
			*/
			printf("%d",j);
		}
		printf("\n");
	}
	}

