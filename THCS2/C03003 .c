#include<stdio.h>
#include<math.h>
int snt(int n)
{ int i;
	for( i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return (n>1?1:0);
}
int main(){
	int n,i;
	scanf("%d",&n);
	int dem=0;
	for(i=2;;i++){
		if(snt(i))
		{
			dem++;
		  printf("%d\n",i);

	}
	if(dem==n){
		break;
	}
}
}

