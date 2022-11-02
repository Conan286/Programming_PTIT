#include<stdio.h>
int main()
{
	int t,n,i,j,temp,dem=1;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	int a[n][n],cnt=n*n,ct=0,ht=0,cd=n-1,hd=n-1;
	while(cnt>0)
	{
	for(i=ct;i<=cd;i++)
	{
		a[ht][i]=cnt--;
		}	
		for(i=ht+1;i<=hd;i++) a[i][cd]=cnt--;
		if(ht<hd)
		{
		for(i=cd-1;i>=ct;i--)
		{
			a[hd][i]=cnt--;
			}	
		}
		if(ct<cd)
		{
			for(i=hd-1;i>ht;i--)
			a[i][ct]=cnt--;
		}
		cd--;
		hd--;
		ct++;
		ht++;
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

