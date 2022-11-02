#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define getstr(s) getline(cin,s);
#define clearstr(); cin.ignore(200, '\n');
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
PhanSo tong(PhanSo &p,PhanSo &q)
{
PhanSo s;
s.t=p.t*q.m+q.t*p.m;
s.m=p.m*q.m;
rutgon(s);
return s;
}
void in(PhanSo &p)
{
cout<<p.t<<"/"<<p.m;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

