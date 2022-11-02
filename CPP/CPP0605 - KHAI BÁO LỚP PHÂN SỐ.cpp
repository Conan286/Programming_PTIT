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
private:
ll t,m;
public:
PhanSo(ll x,ll y)
{
this->t=x;
this->m=y;
}
void rutgon()
{
ll z=gcd(t,m);
t=t/z,m=m/z;
}
friend istream &operator>>(istream &is,PhanSo &a){
cin>>a.t>>a.m;
return is;
}
friend ostream &operator<<(ostream &os,PhanSo &a)
{
cout<<a.t<<"/"<<a.m<<endl;
return os;
}

};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

