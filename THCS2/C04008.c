#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
int n,m,i,j,vitrichen,dem=1;
while(t--){

scanf("%d %d %d",&n,&m,&vitrichen);
int a[n+m];//n=6 m=3 8
//0 1 2 3 0 1 2 4 5
//0 1 2 3 4 5 6 7 8
int b[m];
for( i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for( j=0;j<m;j++)
{
	scanf("%d",&b[j]);
}

for( i=n+m-1;i>=vitrichen+m;i--)
{
	a[i]=a[i-m];
}
for( i=vitrichen;i<vitrichen+m;i++)
{
	a[i]=b[i-vitrichen];
}
printf("Test %d:\n",dem++);
for(i=0;i<m+n;i++)
{
	printf("%d ",a[i]);
}
printf("\n");
}
}

