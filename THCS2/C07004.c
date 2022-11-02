#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define nhap(n) scanf("%d",&n)
#define nhapchuoi(s) scanf("\n%[^\n]s",&s)
typedef struct ps{
	int t;
	int m;
}ps;
//nhap phan so
void in(ps*a)
{
	nhap(a->t);
	nhap(a->m);
}
//xuat
void out(ps *a)
{
	printf("%d/%d ",a->t,a->m);
}
//ham tim ucln
int gcd(int a,int b)
{
	a=abs(a);
	b=abs(b);
	if(a%b!=0) return gcd(b,a%b);
	else return b;
}
//ham tim bcnn
int lcm(int a,int b)
{
	return a*b/gcd(a,b);
}
//ham quy dong 2 phan so
void quydong(ps*a,ps*b)
{
	int mausochung=lcm(a->m,b->m);
	a->t=(a->t)*mausochung/(a->m);
	b->t=(b->t)*mausochung/(b->m);
	a->m=mausochung;
	b->m=mausochung;
}
//ham rut gon
void rutgon(ps*a)
{
	int uocchung=gcd(a->t,a->m);
	a->t=(a->t)/uocchung;
	a->m=(a->m)/uocchung;
}
//ham tinh tong 2 phan so
ps tong(ps*a,ps*b)
{
	ps sum;
	sum.t=(a->t)*(b->m)+(a->m)*(b->t);
	sum.m=(a->m)*(b->m);
	rutgon(&sum);
	return sum;
}
//ham tinh thuong
ps thuong(ps*a,ps*b)
{
	ps t;
	t.t=(a->t)*(b->m);
	t.m=(a->m)*(b->t);
	rutgon(&t);
	return t;
}
int main()
{
	int t,test=1;
	nhap(t);
	while(t--)
	{
		ps a,b,sum,th;
		printf("Case #%d:\n",test++);
		//nhap vao phan so a,b
		in(&a); in(&b);
		rutgon(&a);
		rutgon(&b);
		quydong(&a,&b);
		out(&a); out(&b);
		printf("\n");
		sum=tong(&a,&b);
		out(&sum);
		printf("\n");
		th=thuong(&a,&b);
		out(&th);
		printf("\n");
	}
}

