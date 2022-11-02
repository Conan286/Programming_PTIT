#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long
#define yes puts("Yes");
#define no puts("No");
#define N 1001
using namespace std;
string chuanhoa(string h)
{
string s=h;
if(s[1]=='/') s.insert(0,"0");
if(s[4]=='/') s.insert(3,"0");
while(s.size()<10)
s.insert(6,"0");
return s;
}
struct NhanVien{
string n,gt,b,ad,ms,nk;
void nhap()
{
getline(cin,n);
getline(cin,gt);
getline(cin,b);
getline(cin,ad);
getline(cin,ms);
getline(cin,nk);
b=chuanhoa(b);
nk=chuanhoa(nk);
}
void xuat()
{
cout<<"00001 "<<n<<" "<<gt<<" "<<b<<" "<<ad<<" "<<ms<<" "<<nk<<endl;
}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}

