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
class SinhVien{
private:
string name,lop,bd,id;
double gpa;
public:
SinhVien()
{
this->name="";
this->id="B20DCCN001";
this->bd="";
this->lop="";
this->gpa=0;
}
friend istream &operator>>(istream &is,SinhVien &a){
getline(is,a.name);
getline(is,a.lop);
getline(is,a.bd);
cin>>a.gpa;
//
string str="",tmp,s=a.name;
int n=s.length();
vector<string>v;
for(int i=0;i<n;i++) s[i]=tolower(s[i]);
stringstream ss(s);
while(ss>>tmp) v.push_back(tmp);
for(int i=0;i<v.size();i++) v[i][0]-=32;
for(int i=0;i<v.size()-1;++i) str+=v[i],str+=" ";
str+=v[v.size()-1];
a.name=str;
//
if(a.bd[1]=='/') a.bd="0"+a.bd;
if(a.bd[4]=='/') a.bd.insert(3,"0");
return is;
}
friend ostream &operator<<(ostream &os,SinhVien &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.bd<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
return os;
}
};
string solve(string s)
{
string str="",tmp;
int n=s.length();
vector<string>v;
for(int i=0;i<n;i++) s[i]=tolower(s[i]);
stringstream ss(s);
while(ss>>tmp) v.push_back(tmp);
for(int i=0;i<v.size();i++) v[i][0]+=32;
for(int i=0;i<v.size()-1;++i) str+=v[i],str+=" ";
str+=v[v.size()-1];
return str;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

