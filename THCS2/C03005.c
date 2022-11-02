#include<stdio.h>
#include<math.h>
int ucln(int a,int b)
{
	int i;
for(i=a<b?a:b;i>=1;i--)
{
	if(a%i==0&&b%i==0) return i;
	}	
}
int main()
{
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=i+1;j<=b;j++){
			if(ucln(i,j)==1){
				printf("(%d,%d)\n",i,j);
			}
		}
	}

}

