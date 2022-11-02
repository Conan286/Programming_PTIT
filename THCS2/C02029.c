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
/*
1
2 7 
3 8  12
4 9  13 16
5 10 14 17 19
6 11 15 18 20 21

*/
int solan=i;
j=i;
int temp=n;
while(solan--)
{
		
	printf("%c ",j+64);
	j=j+(--temp);
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


