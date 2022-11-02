#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int a[n];
for( i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
for( j=n-1;j>i;j--)
{
	if(a[j]<a[i]){
		int temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
}
}
printf("%d ",a[n-1]);
for(i=n-2;i>=0;i--)
{
    if(a[i]!=a[n-1]) {
        printf("%d",a[i]);
        break;
}
}
}

