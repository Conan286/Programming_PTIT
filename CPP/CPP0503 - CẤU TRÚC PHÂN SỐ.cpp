#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct PhanSo{
ll t,m;
};
void nhap(PhanSo &p)
{
cin>>p.t>>p.m;
}
void rutgon(PhanSo &p)
{
ll k=__gcd(p.t,p.m);
p.t=p.t/k;
p.m=p.m/k;
}
void in(PhanSo &p)
{
cout<<p.t<<"/"<<p.m;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

