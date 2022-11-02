#include<stdio.h>
#include<math.h>
#define N 1000001
int sum(int n);
int tcschc5(int n);
int main(){
	int n,i,j,dem=0;
	scanf("%d",&n);
	int cnt=0;
	for( i=1;i<=n;i++)
	{
		int solan=i;
		/*
1              le         1
3 2            chan       1+2 1+1
4 5 6          le         1+3 1+4 1+5
10 9 8 7       chan       1+9 1+8 1+7 1+6
11 12 13 14 15 le	 	  1+10 1+11 1+12 1+13 1+14
		*/
		
		if(i%2!=0){
		
		for(j=solan;j>=1;j-- )
		{
			printf("%d ",++cnt);
		}
	}
	else{
	cnt=solan+cnt;
	for(j=1;j<=solan;j++)
	{
		printf("%d ",cnt-j+1);
	}
	}
		printf("\n");
	}
}
int sum(int n){
	int tong=0;
	while(n!=0)
	{
		tong+=n%10;
		n=n/10;
	}
	return tong;
}
int tcschc5(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return (sum(n)%5==0?1:0);
}


