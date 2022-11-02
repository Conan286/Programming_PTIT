#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define nhap(n) scanf("%d",&n)
#define xuat(n) printf("%d\n",n)

int main()
{
	
	int n,i,k,dem=0;
	scanf("%d %d",&n,&k);
	//n!/2^k	
	for(i=2;i<=n;i+=2)
	{
		int temp=i;
		while(temp%2==0)
		{
			++dem;
			temp=temp/2;
		}
	}
	if(dem>=k) printf("Yes\n");
	else printf("No\n");

}

