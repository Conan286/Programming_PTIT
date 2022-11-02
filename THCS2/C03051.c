#include<stdio.h>
#include<math.h>
int snt(int n);
int main()
{
	long long a,b;
int t;
scanf("%d",&t);
while(t--){

	int i,dem=0;
	scanf("%lld %lld",&a,&b);
	int st=(int)sqrt(a),fn=(int)sqrt(b);
	for(i=st;i<=fn;i++)
	{
		if(snt(i)){
 //printf("%d\n",i);
 ++dem;
	}
		}
		printf("%d\n",dem);
	}
}
int snt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return n>1;
}
