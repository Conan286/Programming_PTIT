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
class NhanVien{
public:
string name,id,lop,email;
public:
NhanVien()
{
this->name="";
this->id="";
this->lop="";
this->email="";
}
friend istream &operator>>(istream &is,NhanVien &a){
scanf("\n");
getline(is,a.id);
getline(is,a.name);
getline(is,a.lop);
getline(is,a.email);
return is;
}
friend ostream &operator<<(ostream &os,NhanVien &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
return os;
}
};
bool cmp(NhanVien a,NhanVien b)
{
if(a.lop!=b.lop) return a.lop<b.lop;
return a.id<b.id;
}
void sapxep(NhanVien ds[],int n)
{
sort(ds,ds+n,cmp);
}
int main(){
    NhanVien ds[1001];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

