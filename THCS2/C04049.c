#include<stdio.h>
#include<math.h>
#define nhap(a) scanf("%d",&a)
#define out(n) printf("%d ",n)
int lcm(int a,int b)
{
	return a*b/gcd(a,b);
}
int gcd(int a,int b)
{
	if(a%b!=0) return gcd(b,a%b);
	return b;
}

int main()
{
	int t;
	nhap(t);
	while(t--)
	{
		int n,i=0,j=0;
		nhap(n);
		int a[n],b[n+1];
		for(i=0;i<n;i++) nhap(a[i]);
		b[j]=a[0];
		b[n]=a[n-1];
		for(j=1;j<n;j++) b[j]=lcm(a[j],a[j-1]);
		//5 7 10 5
	//   a b c d e
	//gcd(a,b)=5       =>a%5==0             a=5
	//gcd(b,c)=7       => b%5==0&&b%7==0    b=35
	//gcd(c,d)=10      =>c%7==0&&c%10==0    c=70  
	//gcd(d,e)=5       =>d%10==0&&d%5==0    d=10 e=5
	//a+b+c+d+e min
	for(i=0;i<=n;i++) out(b[i]);
	puts("");
	}
}

