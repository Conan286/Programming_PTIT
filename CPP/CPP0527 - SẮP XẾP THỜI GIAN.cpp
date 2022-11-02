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
int h,m,s;
};
void nhap(SinhVien &a)
{
cin>>a.h>>a.m>>a.s;
}
void in_ds(SinhVien ds[],int n)
{
for(int i=0;i<n;i++)
cout<<ds[i].h<<" "<<ds[i].m<<" "<<ds[i].s<<endl;
}

bool cmp(SinhVien a,SinhVien b)
{
if(a.h!=b.h) return a.h<b.h;
else if(a.m!=b.m) return a.m<b.m;
return a.s<b.s;
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

