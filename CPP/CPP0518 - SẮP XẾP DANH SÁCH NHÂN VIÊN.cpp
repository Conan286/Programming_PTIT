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
struct NhanVien
{
string id,ten,gt,bd,add,tax,date;
};
void nhap(NhanVien &a)
{
scanf("\n");
getline(cin,a.ten);
getline(cin,a.gt);
getline(cin,a.bd);
getline(cin,a.add);
getline(cin,a.tax);
getline(cin,a.date);
++cnt;
if(cnt<10) a.id="0000"+to_string(cnt);
else a.id="000"+to_string(cnt);
}
bool cmp(NhanVien a,NhanVien b)
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
m1=m1*10+s1[i]-'0';
m2=m2*10+s2[i]-'0';
}
for(int i=3;i<5;i++)
{
d1=d1*10+s1[i]-'0';
d2=d2*10+s2[i]-'0';
}
if(y1!=y2) return y1<y2;
else if(m1!=m2) return m1<m2;
else return d1<=d2;
}
void sapxep(NhanVien ds[],int n)
{
sort(ds,ds+n,cmp);
}
void inds(NhanVien ds[],int n)
{
for(int i = 0; i < n; i++) 
cout<<ds[i].id <<" "<<ds[i].ten <<" "<<ds[i].gt <<" "<<ds[i].bd <<" "<<ds[i].add <<" "<<ds[i] .tax<<" "<<ds[i] .date<<endl;
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


