#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define getstr(s) getline(cin,s);
#define clearstr(); cin.ignore(200, '\n');
using namespace std;
struct NhanVien{
    string name,sex,born,adress,phone,date;
    };
void nhap(NhanVien &h)
{
getline(cin,h.name);
getline(cin,h.sex);
getline(cin,h.born);
getline(cin,h.adress);
getline(cin,h.phone);
getline(cin,h.date);
}
string chuanhoa(string h)
{
string s=h;
if(s[1]=='/') s.insert(0,"0");
if(s[4]=='/') s.insert(3,"0");
while(s.size()<10)
s.insert(6,"0");
return s;
}
void in(NhanVien &h)
{
h.born=chuanhoa(h.born);
h.date=chuanhoa(h.date);
cout<<"00001 "<<h.name<<" "<<h.sex<<" "<<h.born<<" "<<h.adress<<" "<<h.phone<<" "<<h.date;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

