#include<stdio.h>
#include<math.h>
#include<string.h>
#define in(n) scanf("%lf",&n)
#define re(n) scanf("%d",&n)
double s(double a,double b,double c)
{
return 0.25 *sqrt((a+b+c)*(a+b-c)*(-a+b+c)*(a-b+c));
}
int main()
{
	int t;
	re(t);
	while(t--)
	{
		double a1,a2,b1,b2,c1,c2;
	scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);
		double a=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
	double b=sqrt((a1-c1)*(a1-c1)+(a2-c2)*(a2-c2));
	double c=sqrt((c1-b1)*(c1-b1)+(c2-b2)*(c2-b2));
		
		if(a+b>c&&a+c>b&&b+c>a) printf("%.2lf\n", s(a,b,c));
		else printf("INVALID\n");
	}
}
