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
string id,n,c,b;
double gpa;
};
string chuanhoa(string s)
{
if(s[1]=='/') s="0"+s;
if(s[4]=='/') s.insert(3,"0");
string str=s;
return str;
}
void nhap(SinhVien ds[],int n)
{
for(int i=0;i<n;i++)
{
ds[i].id="B20DCCN"+to_string(i+1);
while((ds[i].id).size()<10)ds[i].id.insert(7,"0");
cin.ignore();
getline(cin,ds[i].n);
cin>>ds[i].c>>ds[i].b>>ds[i].gpa;
ds[i].b=chuanhoa(ds[i].b);
}
}
void in(SinhVien ds[],int n)
{
for(int i=0;i<n;i++)
cout<<ds[i].id<<" "<<ds[i].n<<" "<<ds[i].c<<" "<<ds[i].b<<" "<<setprecision(2)<<fixed<<ds[i].gpa<<endl;
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
