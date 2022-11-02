#include<stdio.h>

int main()
{
int n,i,j,k=64;

scanf("%d",&n);
/* 5
6869707172
67686970
666768
6566
64
*/
for( i=0;i<n;i++)
{
for( j=k+n-i-1;j<k+n+n-2*i-1;j++ )
{
	//i=0 j=68;j<73
	//i=1 j=67;j<72
	//i=2 j=66
	//i=3 j=65
	//i=4 j=64
printf("%c",j);
}
printf("\n");
}
}
