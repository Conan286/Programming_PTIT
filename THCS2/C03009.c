#include<stdio.h>
#include<math.h>
int shh(int n)
{ 
if(n==6||n==28||n==496||n==8128) return 1;
return 0;
}
int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
int min=(a<b?a:b),max=(a>b?a:b);
	for(i=min;i<=max;i++){
		if(shh(i))
		{
			
		  printf("%d ",i);

	}
	
}
}

