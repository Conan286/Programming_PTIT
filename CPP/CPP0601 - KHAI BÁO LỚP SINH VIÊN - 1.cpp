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
struct SinhVien{
string n,c,b;
double gpa;
void nhap()
{
getline(cin,n);
getline(cin,c);
getline(cin,b);
cin>>gpa;
b=chuanhoa(b);
}
void xuat()
{
cout<<"B20DCCN001 "<<n<<" "<<c<<" "<<b<<" "<<setprecision(2)<<fixed<<gpa<<endl;
}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

