#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==0)
{
	//bx+c=0
	if(b==0&&c!=0){
		printf("NO");
		
	}
else{
	printf("%0.2f",-c*1.0/b);
}
}
else{
int delta=b*b-4*a*c;
if(delta<0)
{
	printf("NO");
}
else if(delta==0)
{
	printf("%0.2f",-b/(2.0*a));
}
else if(delta>0){
	printf("%0.2f %0.2f",(-b+sqrt(delta))/(2.0*a),(-b-sqrt(delta))/(2.0*a));
}
}
}
