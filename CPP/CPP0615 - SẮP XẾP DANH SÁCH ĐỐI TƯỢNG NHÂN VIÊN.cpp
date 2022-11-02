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
string name,id,gt,bd,add,tax,date;
public:
NhanVien()
{
this->name="";
this->id="";
this->bd="";
this->gt="";
this->add="";
this->tax="";
this->date="";
}
friend istream &operator>>(istream &is,NhanVien &a){
cnt++;
scanf("\n");
getline(is,a.name);
getline(is,a.gt);
getline(is,a.bd);
getline(is,a.add);
getline(is,a.tax);
getline(is,a.date);
//
if(cnt<10) a.id="0000"+to_string(cnt);
else a.id="000"+to_string(cnt);
return is;
}
friend ostream &operator<<(ostream &os,NhanVien &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.gt<<" "<<a.bd<<" "<<a.add<<" "<<a.tax<<" "<<a.date<<endl;
return os;
}
};
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
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

