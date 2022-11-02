#include<stdio.h>
int ucln(int a,int b)
{
	if(a==b) return a;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;
}
int main()
{
int i,t;
int a,b,c,d;
scanf("%d",&t);
while(t--)
{
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(ucln(a,b)==ucln(c,d))
	{
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
}


