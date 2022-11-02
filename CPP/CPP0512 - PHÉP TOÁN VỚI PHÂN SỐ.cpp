#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include <iomanip> 
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;
struct PhanSo{
ll tu,mau;
};
void rutgon(PhanSo &p)
{
ll k=__gcd(p.tu,p.mau);
p.tu=p.tu/k;
p.mau=p.mau/k;
}
PhanSo tong(PhanSo &p,PhanSo &q)
{
PhanSo s;
s.tu=p.tu*q.mau+q.tu*p.mau;
s.mau=p.mau*q.mau;
rutgon(s);
return s;
}
PhanSo tich(PhanSo &p,PhanSo &q)
{
PhanSo s;
s.tu=p.tu*q.tu;
s.mau=p.mau*q.mau;
rutgon(s);
return s;
}
void process(PhanSo &p,PhanSo &q)
{
PhanSo s,c,d,t;
s=tong( p, q);
 c=tich(s ,s);
 t=tich(p,q);
 d=tich(t,c);
cout<<c.tu<<"/"<<c.mau<<" "<<d.tu<<"/"<<d.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

