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
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;
int c=0;
struct NhanVien{
   string id,ht,gt,ns,dc,mst,nk;
    };
string chuanhoa(string s)
{
if(s[1]=='/')s="0"+s;
if(s[4]=='/') s.insert(3,"0");
string str=s;
return str;
	}
void nhap(NhanVien &x)
{
if(c==0) cin.ignore();
++c;
getline(cin,x.ht);
getline(cin,x.gt);
getline(cin,x.ns);
getline(cin,x.dc);
getline(cin,x.mst);
getline(cin,x.nk);
x.ns=chuanhoa(x.ns);
x.nk=chuanhoa(x.nk);
if(c<10) x.id="0000"+to_string(c);
else x.id="000"+to_string(c);
}
void inds(NhanVien ds[],int N)
{
for(int i=0;i<N;i++)
{
cout<<ds[i].id<<" "<<ds[i].ht<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].mst<<" "<<ds[i].nk<<endl;
}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}



