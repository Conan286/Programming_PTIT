#include<stdio.h>
int main()
{
int m,n,i,j,k=65;
scanf("%d %d",&m,&n);
for( i=0;i<m;i++)
{
	if(i<n-1){
	
for( j=0;j<n-i;j++)
{

	printf("%c",j+k+i);
}
for(j=i;j>0;j--)
{

//
	printf("%c",k+j-1);
}
}
else{
	for(j=n-1;j>=0;j--)
	{
		printf("%c",j+k);
	}
}
printf("\n");

}
}

