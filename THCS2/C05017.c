#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,n,i,j,id=0;
		scanf("%d %d",&m,&n);
		int a[m][n],temp[m*n];
		for(i=0;i<m*n;i++)
		{
			scanf("%d",&temp[i]);
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=temp[id++];
			}
		}
			int ct=0,ht=0,cd=n-1,hd=m-1,dem=0;
			while(dem<m*n)
			{
				for(i=ct;i<=cd;i++){
				printf("%d ",a[ht][i]);
				dem++;
			}
				for(i=ht+1;i<=hd;i++){
				 printf("%d ",a[i][cd]);
				 dem++;
				 }
				if(ht<hd)
				{
					for(i=cd-1;i>=ct;i--){
					 printf("%d ",a[hd][i]);
					 dem++;
				}
				if(ct<cd) {
					for(i=hd-1;i>ht;i--) {
					printf("%d ",a[i][ct]);
					dem++;
				}
			}
				cd--;
				hd--;
				ct++;
				ht++;
			}
			
	}
	printf("\n");
}
}


