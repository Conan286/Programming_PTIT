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
		printf("%c",64);
		for(j=2;j<=(i-1)*2;j+=2)
		
			printf("%c",64+j);
		
		for(j=(i-2)*2;j>=2;j-=2)
				printf("%c",64+j);
		
		if(i!=1)
		
			printf("%c",64);
		
/*
0                i=1
020              i=2 
02420            i=3
0246420          i=4
024686420        i=5

*/
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


