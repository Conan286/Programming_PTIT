#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);


 if(b==0&&a==0)
{
	printf("Vo so nghiem");
}
else if(b!=0&&a==0)
{
printf("Vo nghiem");
}  
else {
	printf("%0.2f",-b*1.0/a);
}
}
