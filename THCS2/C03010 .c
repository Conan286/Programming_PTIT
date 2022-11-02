#include<stdio.h>
#include<math.h>
int gt(int n)
{
	if(n==0||n==1) return 1;
	int giaithua=1;
	int i;
	for( i=1;i<=n;i++)
	{
		giaithua*=i;
	}
	return giaithua;
}
int sst(int n)
{
	int temp=n;
	int sum=0;
	do{
	
		sum+=gt(n%10);
		n=n/10;
	}
	while(n!=0);
	if(sum==temp){
		return 1;
	}
return 0;
}
int main(){
	int n,i;
	scanf("%d",&n);

	for(i=1;i<n;i++){
		if(sst(i))
		{
			
		  printf("%d ",i);

	}
	
}
}

