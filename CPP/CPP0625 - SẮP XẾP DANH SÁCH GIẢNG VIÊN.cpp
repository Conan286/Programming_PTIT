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
class Giangvien{
public:
string name,major,id;
public:
Giangvien()
{
this->name="";
this->id="";
this->major="";
}
friend istream &operator>>(istream &is,Giangvien &a)
{
scanf("\n");
getline(is,a.name);
getline(is,a.major);
++cnt;
if(cnt<10) a.id="GV0"+to_string(cnt);
else a.id="GV"+to_string(cnt);
string s=a.major;
vector<char> v;
string tmp;
stringstream ss(s);
while(ss>>tmp) v.push_back(tmp[0]);
for(int i=0;i<v.size();i++) v[i]=toupper(v[i]);
a.major="";
for(auto x:v) a.major+=x;
return is;
}
friend ostream &operator<<(ostream &os,Giangvien &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.major<<endl;
return os;
}
};
bool cmp(Giangvien a,Giangvien b)
{
string s1=a.name,s2=b.name,tmp="";
stringstream ss1(s1);
stringstream ss2(s2);
vector<string> v1,v2;
while(ss1>>tmp) v1.push_back(tmp);
while(ss2>>tmp) v2.push_back(tmp);
if(v1[v1.size()-1]!=v2[v2.size()-1]) return v1[v1.size()-1]<v2[v2.size()-1];
else return a.id<b.id;
}
int main()
{
int n;
cin>>n;
Giangvien ds[n];
for(int i=0;i<n;i++) cin>>ds[i];
sort(ds,ds+n,cmp);
for(int i=0;i<n;i++) cout<<ds[i];
}


