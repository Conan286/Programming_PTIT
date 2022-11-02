#include<stdio.h>

# define swap(a,b) temp=a; a=b; b=temp;
#define max(a,b) a>b?a:b;

void sort(int a[],int n,int b[])
{
int i,j,temp;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[i])
		{
		swap(a[i],a[j]);
		swap(b[i],b[j]);
		}
	}
}

}
int main()
{
	int n,i,time=0;
	scanf("%d",&n);
	int t[n],d[n];
	for(i=0;i<n;i++)
	{
	scanf("%d %d",&t[i],&d[i]);
	}
	sort(t,n,d);
	/*
3
2 1->3
5 7->12
8 3->15
	*/
	time=t[0]+d[0];
	for(i=1;i<n;i++)
	{
		time=max(time,t[i]);
		time+=d[i];
	}
	printf("%d",time);
	
	
	
	
	
	
	
	
	
	
	
	
}
