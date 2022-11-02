#include<stdio.h>
#include<string.h>
#include<math.h>
int pascal(int i,int j);
int giaithua(int n);
int main()
{
	int t,i,j,n,a,b;
	//scanf("%d",&t);
//while(t--){
	//	int dem=0;
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	int solan=i+1,k=n,j=i;
	for(j=0;j<=i;j++)
	{
		printf("%d ",pascal(i,j));
	}
	printf("\n");
}
}
int giaithua(int n)
{
	if(n<2) return 1;
	int i,tich=1;
	for(i=n;i>1;i--)
	{
		tich*=i;
		}
		return tich;
}
int pascal(int i,int j)
{
	return (giaithua(i)/(giaithua(j)*giaithua(i-j)));
}

