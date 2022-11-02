#include<stdio.h>
#include<math.h>
#define N 1000001
int sum(int n);
int tcschc5(int n);
int main(){
	int n,i,dem=0;
	scanf("%d",&n);
	for(i=5;i<n;i++)
	{
		if(tcschc5(i)){
			++dem;
			printf("%d ",i);
		}
	}
	printf("\n%d",dem);
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


