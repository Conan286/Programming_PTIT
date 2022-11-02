#include<stdio.h>
#include<math.h>
int shh(int n)
{ 
if(n==6||n==28||n==496||n==8128) return 1;
return 0;
}
int main(){
	int n,i;
	scanf("%d",&n);

	for(i=6;i<n;i++){
		if(shh(i))
		{
			
		  printf("%d ",i);

	}
	
}
}

