#include<stdio.h>
#include<math.h>

int main()
{
	int m,n,i,j,t,k=1;
	scanf("%d",&t);
	while(t--){
	
scanf("%d %d",&m,&n);
int a[m][n];
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<m-1;i++)
{
	for(j=0;j<n;j++)
	{
		a[i][j]=a[i+1][j];
	}
}
m--;
for(j=0;j<n-1;j++)
{
	for(i=0;i<m;i++)
	{
		a[i][j]=a[i][j+1];
	}
}
n--;
printf("Test %d:\n",k++);
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
/*
input:
1
3 3
1 2 4
3 4 0
6 3 5
output:
Test 1:

4 0
3 5
*/

}
}
		

