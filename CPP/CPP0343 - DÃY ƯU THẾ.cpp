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
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;
bool check(string s)
{
int c=0,l=0,n=0;
vector<string>v;
stringstream ss(s);
string tmp;
while(ss>>tmp){
v.push_back(tmp);
n++;
}
for(int i=0;i<v.size();i++){
int k=v[i][v[i].size()-1]-'0';
if(k%2==0) ++c;
else ++l;
}
return (n%2==0)?(c>l):(l>c);
}
main()
{
int t,n,x;
string s;
cin>>t;
cin.ignore();
while(t--){
//cin.ignore();
getline(cin,s);
if(check(s)) yes
else no
}
}
