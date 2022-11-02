#include<stdio.h>
#include<string.h>
#include<math.h>
int pascal(int i,int j);
int giaithua(int n);
int main()
{
	int m,n,p,q,i,j,temp;	
	scanf("%d %d %d %d",&m,&n,&p,&q);
	int a[m][n],b[n][p],c[p][q],ab[m][p],abc[m][q],chuyenvib[p][n],chuyenvic[q][p];
	for(i=0;i<m;i++){	
	for(j=0;j<n;j++){	
	scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++){	
	for(j=0;j<p;j++){	
	scanf("%d",&b[i][j]);
}
}
for(i=0;i<p;i++){	
	for(j=0;j<q;j++){	
	scanf("%d",&c[i][j]);
}
}
for(i=0;i<p;i++)
{
	for(j=0;j<n;j++)
	{
		chuyenvib[i][j]=b[j][i];
	}
}
/*for(i=0;i<p;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d ",chuyenvib[i][j]);
	}
	printf("\n");
}
	
	In:

4    3    2    2
//4x3 m*n
2    5    4       
4    1    9    
3    5    2    
3    9    3 

5    3   2             
7    7   4
                    ab[i][j]+=a[i][temp]*bcv[j][temp]}*/

for(i=0;i<m;i++)
{
	for(j=0;j<p;j++)
	{
		ab[i][j]=0;
		for(temp=0;temp<n;temp++){
		
		ab[i][j]+=a[i][temp]*chuyenvib[j][temp];
	}
	//printf("ab[%d][%d]=%d\n",i,j,ab[i][j],j);
	}
	
}
/*
ab[0][0]=33
ab[0][1]=65
ab[1][0]=41
ab[1][1]=71
ab[2][0]=34
ab[2][1]=64
ab[3][0]=48
ab[3][1]=96
7  7   33 65    
5  4   41 71
       34 64
       48 96
*/
//chuyen vi c
for(i=0;i<q;i++)
{
	for(j=0;j<p;j++)
	{
		chuyenvic[i][j]=c[j][i];
	}
}
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		abc[i][j]=0;
		for(temp=0;temp<p;temp++)
		{
			abc[i][j]+=ab[i][temp]*chuyenvic[j][temp];
		}
	}
}
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		printf("%d ",abc[i][j]);
	}
	printf("\n");
}
}


