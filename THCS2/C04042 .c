#include<stdio.h>
int summax(int a[],int n)
{
	int current=0,max=0,i;
	for(i=0;i<n;i++)
	{
		current+=a[i];
		if(current<=0) current=0;
		else if(current>max) max=current;
	}
	return max;
}
int main()
{
	
	int n,t;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	int a[n],i,id=0,j;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				id=1;
				printf("%d\n",a[i]);
				break;
			}
		}
		if(id) break;
	}
	if(id==0)
	{
		printf("NO\n");
	}
}
}

