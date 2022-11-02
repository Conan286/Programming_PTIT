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
class SinhVien{
public:
string name,id,bd,lop;
double gpa;
public:
SinhVien()
{
this->name="";
this->id="";
this->bd="";
this->lop="";
this->gpa=0;
}
friend istream &operator>>(istream &is,SinhVien &a){
cnt++;
scanf("\n");
getline(is,a.name);
getline(is,a.lop);
getline(is,a.bd);
cin>>a.gpa;
//
if(cnt<10) a.id="B20DCCN00"+to_string(cnt);
else a.id="B20DCCN0"+to_string(cnt);
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
bool cmp(SinhVien a,SinhVien b)
{
return a.gpa>=b.gpa;
}
void sapxep(SinhVien ds[],int n)
{
sort(ds,ds+n,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
