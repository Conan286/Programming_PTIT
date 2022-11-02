#include<stdio.h>

int main()
{
int n,i,j,k=65;

scanf("%d",&n);
/* 5
6567697173
67697173
697173
7173
73
*/
for( i=0;i<=(n-1)*2;i+=2)
{
for( j=i;j<=(n-1)*2;j+=2) printf("%c",j+65);
printf("\n");
}
}


