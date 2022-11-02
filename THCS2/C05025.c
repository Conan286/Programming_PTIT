#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define nhap(n) scanf("%d",&n);
#define xuat(n) printf("%d ",n);
#define swap(a,b) int temp=b; b=a; a=temp;
int main()
{
	int t,test=1;
	nhap(t);
	while(t--)
	{
	int n,m,i,j,k,l,c,b;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) nhap(a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		//	printf("So sanh voi a[%d][%d]:\n",i,j);
			for(k=i;k<m;k++)
			{
				for(l=j;l<n;l++)
				{
					if(a[k][l]< a[i][j]){
						swap(a[k][l],a[i][j]);
						/*
so sanh voi a[0][0]						
4 2 6   2 4 6  
3 5 3-> 3 5 3
5 7 8   5 7 8
so sanh voi a[0][1]
2 4 6  2 3 6
3 5 3->3 5 4
5 7 8  5 7 8
so sanh voi a[0][2]
2 3 6  2 3 4
3 5 4->3 5 6
5 7 8  5 7 8
so sanh voi a[1][0]
2 3 4  2 3 4
3 5 6->3 5 6
5 7 8  5 7 8
so sanh voi a[1][1]
2 3 4  2 3 4
3 5 6->3 5 6
5 7 8  5 7 8
so sanh voi a[1][2]
2 3 4  2 3 4
3 5 6->3 5 6
5 7 8  5 7 8
so sanh voi a[2][0]
2 3 4  2 3 4
3 5 6->3 5 6
5 7 8  5 7 8
so sanh voi a[2][1]
2 3 4  2 3 4
3 5 6->3 5 6
5 7 8  5 7 8	
so sanh voi a[2][2]							
2 3 4  2 3 4
3 5 6->3 5 6
5 7 8  5 7 8
                        
						*/
					}
				}
			}
		/*		for(c=0;c<m;c++)
				{
					for(b=0;b<n;b++)
					{
						printf("%d ",a[c][b]);
					}
					puts("");
				}*/
			}
		}
		printf("Test %d:\n",test++);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		puts("");
	}
}
}


