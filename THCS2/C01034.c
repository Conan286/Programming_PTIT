#include<stdio.h>
#include<math.h>

int main()
{
int m,n,dem;

scanf("%d %d",&m,&n);
if(m<0)
{ 
m=0;
}
int count=sqrt(n)-sqrt(m);
int q=sqrt(n);
int r=sqrt(m);
if(q*q==n||r*r==m) count++;
printf("%d\n",count);
float start=(float)sqrt(m);
int i=(int) sqrt(m);

for(i=start>i?i+1:i;i<=sqrt(n);i++)
{
printf("%d\n",i*i);
}
}






































