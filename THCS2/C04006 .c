#include<stdio.h>
#include<math.h>

int snt(int n)
{
	int i;
	for( i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
int main()
{
int n,t;
int i;




scanf("%d",&n);
 int a[101];
for( i=0;i<n;i++){
	scanf("%d",&a[i]);
}
int l=0,r=n-1;
while(l<=r)
{
	int t=a[r];
	a[r]=a[l];
	a[l]=t;
	l++;
	 r--;
}
for( i=0;i<n;i++){

 
printf("%d ",a[i]);


}

}
