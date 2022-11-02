#include<stdio.h>
int main()
{
int m,n,i,j;
scanf("%d %d",&m,&n);
for( i=0;i<m;i++)
{
if(m-i>=n){
for(j=0;j<n;j++)
{
	printf("%c",n+64);
}
}
else{

/*
m=7 n=5
EEEEE
EEEEE
EEEEE  m-i>=n
DEEEE i=3  n-(m-i)=1        j:0-0 68           1-4:69
CDEEE i=4                   j:0-1 6768         2-4:69
BCDEE i=5                   j:0-2 666768       3-4:69
ABCDE i=6                   j:0-3 65666768     4-4:69  
for( j=0;j<n-m+i;j++)
{

printf("%c",64+m-i+1+j);
}
for(int j=n-m+i;j<n;j++)
printf("%c",64+m);
}
}
BCC i=5   n-(m-i)=3-7+5=1 printf("%c",64+m-i)
ABC i=6   n-(m-i)=3-7+6=2 printf("%c",64+m-i)

*/
for( j=0;j<n-m+i;j++)
{

printf("%c",64+m-i+j);
}
for( j=n-m+i;j<n;j++){

printf("%c",64+n);
}
}
printf("\n");

}
}

