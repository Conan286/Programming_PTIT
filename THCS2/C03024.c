#include<stdio.h>
#include<math.h>

int sum(int n)
{
	int t=0;
	while(n!=0){
		t+=n%10;
		n=n/10;
	}
	return t;
}

int main()
{

int a,b,i;
		scanf("%d %d",&a,&b);
		if(sum(a)==sum(b)){
			printf("%d %d",a,b);
		}
		else{
		
int max=sum(a)>sum(b)?a:b;
int min=sum(a)<sum(b)?a:b;
printf("%d %d",min,max);
}
}
 


