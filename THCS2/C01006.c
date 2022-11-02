#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
if(b==0)
{
printf("0");

}
else{
	printf("%d %d %d %0.2f %d",a+b,a-b,a*b,a*1.0/b,a%b);
}
}
