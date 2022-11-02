#include<stdio.h>
#define N 1000001
int main(){
	int a[N],i,j,n;
	a[0]=a[1]=0;
	scanf("%d",&n);
	for( i=2;i<N;i++)
	{
		a[i]=1;
	}
	for(i=2;i<1001;i++)
	{
		for(j=i*i;j<N;j+=i){
			a[j]=0;
		}
	}
	for(i=2;i<n;i++){
		if(a[i])
		{
			  printf("%d\n",i);

	}
	
}
}
