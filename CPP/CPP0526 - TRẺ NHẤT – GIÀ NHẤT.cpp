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
struct SinhVien
{
string name,bd;
};
void nhap(SinhVien &a)
{
cin>>a.name>>a.bd;
}

bool cmp(SinhVien a,SinhVien b)
{
string s1=a.bd,s2=b.bd;
int y1=0,y2=0,m1=0,m2=0,d1=0,d2=0;
//  mm/dd/yyyy
//  
for(int i=6;i<10;i++)
{
y1=y1*10+s1[i]-'0';
y2=y2*10+s2[i]-'0';
}
for(int i=0;i<2;i++)
{
d1=d1*10+s1[i]-'0';
d2=d2*10+s2[i]-'0';
}
for(int i=3;i<5;i++)
{
m1=m1*10+s1[i]-'0';
m2=m2*10+s2[i]-'0';
}
if(y1!=y2) return y1<y2;
else if(m1!=m2) return m1<m2;
else return d1<=d2;
}
void sap_xep(SinhVien ds[],int n)
{
sort(ds,ds+n,cmp);
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    cout<<ds[n-1].name<<"\n"<<ds[0].name<<endl;
    return 0;
}

