#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include <iomanip> 
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;
struct SinhVien{
string t,l,ns;
double gpa;
};
string solve(string s)
{
if(s[1]=='/') s="0"+s;
if(s[4]=='/') s.insert(3,"0");
string str=s;
return str;
}
void nhapThongTinSV(SinhVien &a)
{
//cin.ignore();
getline(cin,a.t);
cin>>a.l>>a.ns>>a.gpa;
a.ns=solve(a.ns);
}
void inThongTinSV(SinhVien &a)
{
cout<<"N20DCCN001 "<<a.t<<" "<<a.l<<" "<<a.ns<<" "<<setprecision(2)<<fixed<<a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}



