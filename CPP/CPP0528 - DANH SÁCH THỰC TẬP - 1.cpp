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
class NhanVien{
public:
string name,id,lop,email,dn;
int stt;
public:
NhanVien()
{
this->name="";
this->id="";
this->lop="";
this->email="";
this->dn="";
this->stt=0;
}
friend istream &operator>>(istream &is,NhanVien &a){
scanf("\n");
getline(is,a.id);
getline(is,a.name);
getline(is,a.lop);
getline(is,a.email);
getline(is,a.dn);
a.stt=++cnt;
return is;
}
friend ostream &operator<<(ostream &os,NhanVien &a)
{
cout<<a.stt<<" "<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<" "<<a.dn<<endl;
return os;
}
};
bool cmp(NhanVien a,NhanVien b)
{
return a.name<b.name;
}
void sapxep(NhanVien ds[],int n)
{
sort(ds,ds+n,cmp);
}
int main(){
    NhanVien ds[1001];
    int n,q;
    string find;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ds[i];
    cin>>q;
    sapxep(ds,n);
    while(q--)
    {
	cin>>find;
	for(int i=0;i<n;i++)
	if(ds[i].dn==find)
	cout<<ds[i];
	}
    return 0;
}




