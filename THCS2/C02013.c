#include<stdio.h>
#include<math.h>
int main()
{
int m,n,i,j;
scanf("%d %d",&m,&n);
int k=m>n?m:n;
for(i=1;i<=m;i++)
{
	if(m-i>n-2){
	
	for(j=k-i+1;j>k-i+1-n;j--)
	{
	printf("%d",j);
	}
}
else{

	/*
4 6	
654321  
54321     2   i=1
4321     23   i=2
321     234   i=3 
4 4
4321
321     2     2-2
21     23
1     234     2-4

6  4  k=6
6543
5432
4321
321  2     2-2  i=4 m-i=2 k=6 ()  
21  23     2-3  i=5 m-i=1 k=6
1  234     2-4  i=6 m-i=0 k=6
	*/
	for(j=k-i+1;j>=1;j--)
	{
		printf("%d",j);
	}
	for(j=2;j<=n-k+i;j++)
	{
	   printf("%d",j);
	}
}
	printf("\n");
}
}

