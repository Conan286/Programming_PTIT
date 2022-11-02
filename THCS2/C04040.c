#include<stdio.h>
#include<math.h>
#define cin(n) scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define swap(a,b) int t=a; a=b; b=t;
#define max(a,b)  (a>b?a:b)
long long maxsum(int a[],int n)
{
    long long current=0,max=0,i;
    for(i=0;i<n;i++)
    {
        current+=a[i];
        if(current<=0) current=0;
        else if(max<current) max=current;
    }
    return max;
}
int mx(int a[],int n){
    
    int nn=a[0],i;
    for(i=0;i<n;i++)
    {
        if(a[i]>nn) nn=a[i];
    }
    return nn;
}
int main()
{
int t,n,i,j,test=1;
cin(t);
while(t--)
{
	cin(n);
	int a[n],id=0;
	for(i=0;i<n;i++)
	{
		cin(a[i]);
		if(a[i]>=0){
			id=1;
		}
	}
	printf("%lld\n",maxsum(a,n));
}
}
