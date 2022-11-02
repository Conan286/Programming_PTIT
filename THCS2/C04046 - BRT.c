#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
#define nhap(n) scanf("%d",&n);
ll max(ll a,ll b){
	return a>b?a:b;
}
ll min(ll a,ll b)
{
	return a<b?a:b;
}
void insert_sort(ll a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		ll temp=a[i];
		j=i-1;
		while(a[j]>temp&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
main()
{
	int test,n;
	nhap(test);
	while(test--)
	{
		nhap(n);
		long long a[n];
		int socap=0,i;
		for(i=0;i<n;i++) scanf("%lld",&a[i]);
		long long min_distance=abs(a[1]-a[0]);
		insert_sort(a,n);
		for(i=1;i<n;i++) {
		min_distance=min(abs(a[i]-a[i-1]),min_distance);
	}
	for(i=1;i<n;i++) {
		if(abs(a[i]-a[i-1])==min_distance) socap++;
	}
	printf("%lld %lld",min_distance,socap);
	puts("");
}
}

