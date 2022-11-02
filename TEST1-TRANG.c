#include<stdio.h>
#include<math.h>

int main()
{
//	int num=1;
//	while(num<1000){
	int a,i=0,j;
	int luutru[10];
	for(i=0;i<10;i++)
	{
		luutru[i]=0;
	}
	scanf("%d",&a);
	/*
	
	*/
	i=0;
	while(a>0)
	{
		luutru[i++]=a%2;
		a=a/2;
			}
			int sum=0;
		//	printf("%d-",num++);
			for(j=i-1;j>-1;j--)
			{
				sum=sum*10+luutru[j];
			}
			
			printf("%d",sum);
//}
}


