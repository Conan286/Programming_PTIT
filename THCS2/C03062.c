#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define nhap(n) scanf("%d",&n)
#define xuat(n) printf("%d\n",n)
#define  ll long long
bool snt(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return n>1;
}
ll gcd(ll a,ll b)
{
	if(a%b!=0) return gcd(b,a%b);
	else return b;
}
ll lcm(ll a,ll b)
{
	return a*b/(gcd(a,b));
}
ll rs(ll a,ll b)
{
	if(a==b) return b;
	if(b-a==1) return a*b;
	ll i,kq=lcm(a+1,a);
	for(i=a+1;i<=b;i++)
	{
		kq=lcm(kq,i);
	}
	return kq;
}
int main()
{
	int t;
	nhap(t);
	while(t--)
	{
	ll n,m;	
	scanf("%lld %lld",&n,&m);
	printf("%lld\n",rs(n,m));
}
}

