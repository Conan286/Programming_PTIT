#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long

using namespace std;
ll gcd(ll a,ll b)
{
if(a%b==0) return b;
return gcd(b,a%b);
}
class PhanSo{
public :
ll t,m;
PhanSo(ll a,ll b)
{
t=a,m=b;
}
void rutgon()
{
ll k=gcd(t,m);
t/=k,m/=k;
}
friend istream &operator>>(istream &is,PhanSo &a)
{
cin>>a.t>>a.m;
return is;
}
friend ostream &operator<<(ostream &os,PhanSo a)
{
cout<<a.t<<"/"<<a.m<<endl;
return os;
}
PhanSo operator+(PhanSo b)
{
PhanSo c(1,1);
c.t=t*b.m+m*b.t;
c.m=m*b.m;
c.rutgon();
return c;
}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}


