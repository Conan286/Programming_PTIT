#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int i;
for( i=2;i<=sqrt(n);i++){
if(n%i==0) return 0;
}
return (n>1?1:0);
}


int main()
{
int n,t;
scanf("%d",&t);
while(t--){
	int uoc=0;
scanf("%d",&n);


if(snt(n)){
printf("YES\n");
}
else{
printf("NO\n");
}
}
}

