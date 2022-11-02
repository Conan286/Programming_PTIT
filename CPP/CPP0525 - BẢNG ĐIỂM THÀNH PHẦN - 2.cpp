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
int cnt=0;
struct SinhVien
{
string id,name,lop;
double m1,m2,m3;
};
void nhap(SinhVien &a)
{
scanf("\n");
getline(cin,a.id);
getline(cin,a.name);
getline(cin,a.lop);
cin>>a.m1>>a.m2>>a.m3;
}
void in_ds(SinhVien ds[],int n)
{
for(int i=0;i<n;i++)
cout<<i+1<<" "<<ds[i].id<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<fixed<<setprecision(1)<<ds[i].m1<<" "<<fixed<<setprecision(1)<<ds[i].m2<<" "<<fixed<<setprecision(1)<<ds[i].m3<<endl;
}

bool cmp(SinhVien a,SinhVien b)
{
return a.name<b.name;
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
    in_ds(ds,n);
    return 0;
}

