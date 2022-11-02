#include<stdio.h>
int main()
{
int m,n,i,b,j,t,dem=1;
scanf("%d",&m);
int a[m][m];
for(i=0;i<m;i++)
{
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
/*
INPUT
3
1 2 3
4 5 6
7 8 9
OUTPUT
3 2 1
4 5 6
9 8 7


INPUT
4
1 2 3 4
5 6 7 8
9 8 7 4
2 3 1 7
OUTPUT
4 2 3 1   a[0][0]<->a[0][m-1]
5 7 6 8   a[1][1]<->a[1][m-2]
9 7 8 4   a[2][2]<->a[2][m-3]
7 3 1 2   a[3][3]<->a[3][m-4]
for(i=0;i<m;i++)
{
swap(a[i][i],a[i][m-1-i])
}






*/
for(i=0;i<m;i++)
{
//swap(a[i][i],a[i][m-1-i])
int temp=a[i][m-1-i];
a[i][m-1-i]=a[i][i];
a[i][i]=temp;
}
for(i=0;i<m;i++)
{
	for(j=0;j<m;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
}


















	

