#include<stdio.h>
int main()
{
int m,n,i,j;
scanf("%d %d",&m,&n);
for( i=0;i<m;i++)
{
	if(i<n-1){
	
for( j=i;j<n;j++)
{

	printf("%c",j+64);
}
for(j=n-i;j<n;j++)
{
	printf("%c",64+n-1);
}
}
else{
	for(j=0;j<n;j++)
	{
		printf("%c",64+n-1);
	}
}
printf("\n");

}
}

