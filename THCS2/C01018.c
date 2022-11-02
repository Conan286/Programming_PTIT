#include<stdio.h>
#include<math.h>
int main()
{
int n,t;

scanf("%d",&t);
while(t--){
	scanf("%d",&n);
int k=(int )(sqrt(n));
if(k*k==n)
{
	printf("YES\n");
}
else{
	printf("NO\n");
}
}
}
