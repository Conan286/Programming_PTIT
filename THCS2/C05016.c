#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int cnt=1,a[n][n],ht=0,ct=0,hd=n-1,cd=n-1;
while(cnt<=n*n)
{
	for(i=ct;i<=cd;i++)
	{
		a[ht][i]=cnt++;
	}
	for(i=ht+1;i<=hd;i++)
	{
		a[i][cd]=cnt++;
	}
	/*
	1 2 3
	8 9 4
	7 6 5
	*/
	if(ht<hd)
	{
		for(i=cd-1;i>=ct;i--)
		{
			a[hd][i]=cnt++;
		}
	}
	if(ct<cd)
	{
		for(i=hd-1;i>ht;i--)
		{
			a[i][ct]=cnt++;
		}
	}
	ct++;
	ht++;
	cd--;
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

