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
#define invalid puts("INVALID");
#define ll long long
#define PI 3.141592653589793238
using namespace std;
bool check(string s)
{
int l=0,r=s.length()-1;
while(l<r)
if(s[l++]!=s[r--]) return 0;
return s.length()>1;
}
bool cmp(string a,string b)
{
if(a.size()!=b.size()) return a.size()>b.size();
return a>b;
}
int main()
{
string s;
map<string,int>mp;
set<string>se;
vector<string>v;
while(cin>>s)
{
if(check(s)){
se.insert(s);
mp[s]++;
}
}
for(auto x:se) v.push_back(x);
sort(v.begin(),v.end(),cmp);
for(int i=0;i<v.size();i++) cout<<v[i]<<" "<<mp[v[i]]<<endl;
}

