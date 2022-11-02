#include<stdio.h>
int main()
{
int m,n,i,a,b,j,t,dem=1;
scanf("%d",&t);
while(t--){

scanf("%d %d",&m,&n);
int arr[m][n];

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
	}
	}
	int maxhang=0;
	int idhang=0;
		for(j=0;j<n;j++)
		{
		maxhang+=arr[0][j];
		}
		for(i=1;i<m;i++)
	{
		int maxh=0;
		for(j=0;j<n;j++)
		{
maxh+=arr[i][j];
}
maxhang=maxhang>maxh?maxhang:maxh;
idhang=maxhang>maxh?idhang:i;
}
//xoa hang
/*
1 2 4    1 2 4
3 4 0  =>3 4 0 
6 3 5
*/
for(i=idhang;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		arr[i][j]=arr[i+1][j];
	}
}
m--;

//maxcot
/*
1 2 4    1 2 4    1 4            
3 4 0  =>3 4 0 => 3 0            
6 3 5
*/
int maxcot=0;
for(i=0;i<m;i++)
{
	
	maxcot+=arr[i][0];
}

int idcot=0;
for(j=1;j<n;j++)
{
	int maxc=0;
	for(i=0;i<m;i++)
	{
		maxc+=arr[i][j];
	}
	maxcot=maxcot>maxc?maxcot:maxc;
	idcot=maxcot>maxc?idcot:j;
}

for(j=idcot;j<n;j++)
{
	for(i=0;i<m;i++)
	{
		arr[i][j]=arr[i][j+1];
	}
}
n--;
printf("Test %d:\n",dem++);
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
}
}

















	

