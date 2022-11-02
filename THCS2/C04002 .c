#include<stdio.h>
#include<math.h>

int snt(int n)
{
	int i;
	for( i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
int main()
{
int n,t;
int i;
scanf("%d",&t);

while(t--){

scanf("%d",&n);
 int a[101];
for( i=0;i<n;i++){
	scanf("%d",&a[i]);
}

for( i=0;i<n;i++){
if(snt(a[i])) {
 
printf("%d ",a[i]);

}
}
printf("\n");
}
}

