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
string name,id,lop,email,major;
public:
NhanVien()
{
this->name="";
this->id="";
this->lop="";
this->email="";
this->major="";
}
friend istream &operator>>(istream &is,NhanVien &a){
scanf("\n");
getline(is,a.id);
getline(is,a.name);
getline(is,a.lop);
getline(is,a.email);
a.major+=a.id[5];
a.major+=a.id[6];
return is;
}
friend ostream &operator<<(ostream &os,NhanVien &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
return os;
}
};
string solve(string s)
{
stringstream ss(s);
string s1="",tmp;
vector<char>v;
while(ss>>tmp) v.push_back(tmp[0]);
for(int i=0;i<2;i++) {
v[i]=toupper(v[i]);
s1+=v[i];
}
return s1;
}
int main(){
    NhanVien ds[1001];
    int n,q;
    string find;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ds[i];
    cin>>q;
    while(q--)
    {
    scanf("\n");
	getline(cin,find);
	string s2=solve(find);
	for(int i=0;i<find.length();i++) find[i]=toupper(find[i]);
	cout<<"DANH SACH SINH VIEN NGANH "<<find<<":\n";
	for(int i=0;i<n;i++){
	if((ds[i].major=="AT"||ds[i].major=="CN")&&ds[i].lop[0]=='E') continue;
	if(ds[i].major==s2)
	cout<<ds[i];
	}
	}
    return 0;
}



