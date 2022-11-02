#include<stdio.h>
#include<math.h>
int snt(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n;j++)
	{
	
	scanf("%d",&a[i][j]);
}
}
	int id=0,max=0;
for(i=n-1;i>=0;i--)
{
int dem=0;
	for(j=0;j<n;j++)
	{
		if(snt(a[i][j])) ++dem;
	}
	max=max>dem?max:dem;
	id=max>dem?id:i;
}
printf("%d\n",id+1);
for(i=0;i<n;i++)
{

if(snt(a[id][i])) 
{

printf("%d ",a[id][i]);
}
}
}
int snt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return n>1?1:0;
}

