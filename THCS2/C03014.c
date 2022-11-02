#include<stdio.h>

int main()
{
	long long n;
	int i;
	scanf("%d",&n);
long long fibonacci[40];
fibonacci[0]=0;
fibonacci[1]=1;
for(i=2;i<40;i++)
{
	fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
}
int index =0;
for(i=0;i<40;i++){
	if(n==fibonacci[i]) 
	{
index=1;
break;
}
}
printf("%d",index);
}
	


 
