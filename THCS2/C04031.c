#include<stdio.h>
#define cin(n) scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define swap(a,b) int t=a; a=b; b=t;

int main()
{
int t,n,i,j,test=1;
cin(t);
while(t--)
{
	cin(n);
	int a[n],length[n];
	for(i=0;i<n;i++)
	{
		cin(a[i]);
		length[i]=1;
	}
	for(i=0;i<n-1;i++)
	{
	for(j=i;j<n-1;j++)
	{
		if(a[j]<a[j+1]){
			length[i]++;
		}
		else{
			break;
		}
	}
	}
	int max=length[0];
	for(i=0;i<n;i++)
	{
		max=max>length[i]?max:length[i];
	}
	printf("Test %d:\n%d\n",test++,max);
	for(i=0;i<n;i++)
	{
		if(length[i]==max){
			for(j=i;j<i+max;j++)
			cout(a[j]);
			printf("\n");
		}
	}
}
}


