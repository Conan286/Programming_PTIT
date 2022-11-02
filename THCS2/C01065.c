#include<stdio.h>
#include<math.h>
int main(){
	long long n,i=0,j,k[101];
	scanf("%lld",&n);
	int dem[10];
	for(i=0;i<10;i++)
	{
		dem[i]=0;
	}
	while(n!=0){
		int t=n%10;
		k[i++]=t;
		if(snt(t))
		{
			dem[t]++;
		}
		n=n/10;
	}
	for(j=i-1;j>=0;j--)
	{
		if(snt(k[j])&&dem[k[j]]>0){
		
		printf("%d %d\n",k[j],dem[k[j]]);
dem[k[j]]=0;
}
}
}
int snt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1?1:0;
}


