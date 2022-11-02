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
#include<string.h>
#include<fstream>
#include<iomanip>
#define ll long long
using namespace std;
main()
{
int t;
cin>>t;
cin.ignore();
map<string,int>mp;
mp.clear();
while(t--)
{
string s;
getline(cin,s);
for(int i=0;i<s.length();i++) if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
vector<string>v;
stringstream ss(s);
string tmp;
string str="";
while(ss>>tmp){
v.push_back(tmp);
}
str+=v[v.size()-1];
for(int i=0;i<v.size()-1;i++) str+=v[i][0];
if(mp[str]==0) cout<<str<<"@ptit.edu.vn\n";
else cout<<str<<mp[str]+1<<"@ptit.edu.vn\n";
mp[str]++;
}
}
