#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
struct SinhVien{
    string name,birth,lop;
    double gpa;
};
void nhap(SinhVien &h)
{
getline(cin,h.name);
cin>>h.lop>>h.birth>>h.gpa;
}
void in(SinhVien &h)
{
string s=h.birth;
if(s[1]=='/') s.insert(0,"0");
//cout<<s<<endl;
if(s[4]=='/') s.insert(3,"0");

h.birth=s;

cout<<"B20DCCN001 "<<h.name<<" "<<h.lop<<" "<<h.birth<<" "<<setprecision(2)<<fixed<<h.gpa;
}
    int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
