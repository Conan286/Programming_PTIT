#include<stdio.h>
int main()
{
int m,n,i,j,k=96;
scanf("%d %d",&m,&n);
/*
m=4 n=6            m<n
f  fffff
fe  eeee
fed  ddd
fedc  cc

70  7070707070
7069  69696969
706968  686868
70696867  6767
m=6 n=4
f fff
fe ee
fed d
fedc        i>n-1
fedc
fedc

*/
int max=m>n?m:n;

for(i=1;i<=m;i++)
{
	if(i<n)
	{
		for(j=max+k;j>max+k-i;j--)
		{
			printf("%c",j);
		}
		for(j=n;j>i;j--)
		{
			printf("%c",max+k-i+1);
		}
	}
	else{
		for(j=1;j<=n;j++)
		{
			printf("%c",max+k-j+1);
		}
	}
	printf("\n");
}
}

