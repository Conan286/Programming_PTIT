#include<stdio.h>
int main()
{
	int t,n,i;
	scanf("%d",&t);
	int tien[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(t--)
	{
		int dem=0;
		scanf("%d",&n);
		for(i=9;i>=0;i--)
		{
			while(n>=tien[i])
			{
				n-=tien[i];
				++dem;
			}
			if(n<=0) break;
		}
printf("%d\n",dem);
}

}
