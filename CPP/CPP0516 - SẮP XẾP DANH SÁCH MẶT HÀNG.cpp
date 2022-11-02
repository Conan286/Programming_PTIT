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
class DN{
public:
int id;
string name,group;
double in,out,loi;
public:
DN()
{
this->id=0;
this->name="";
this->group="";
this->in=0;
this->out=0;
this->loi=0;
}
friend istream &operator>>(istream &is,DN &a)
{
scanf("\n");
++cnt;
a.id=cnt;
getline(is,a.name);
getline(is,a.group);
cin>>a.in;
cin>>a.out;
a.loi=a.out-a.in;
return is;
}
friend ostream &operator<<(ostream &os,DN &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.group<<" "<<fixed<<setprecision(2)<<a.loi<<endl;
return os;
}
};
bool cmp(DN a,DN b)
{
return a.loi>b.loi;
}
int main()
{
int n,a,b,q;
cin>>n;
DN ds[n];
for(int i=0;i<n;i++) cin>>ds[i];
sort(ds,ds+n,cmp);
for(int i=0;i<n;i++) cout<<ds[i];
}


