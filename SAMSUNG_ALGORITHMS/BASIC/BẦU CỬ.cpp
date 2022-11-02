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
#define none puts("NONE");
using namespace std;
map<int,int>mp;
bool cmp(int a,int b)
{
if(mp[a]!=mp[b])
return mp[a]<mp[b];
return a>b;
}
main()
{
int m,n;
cin>>n>>m;
int a[n];
vector<int>v;
set<int>s,s2;
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;
s.insert(a[i]);
}
for(auto x:s){
v.push_back(x);
s2.insert(mp[x]);
}
if(s2.size()<2) none
else{
sort(v.begin(),v.end(),cmp);
//for(auto x:v) cout<<x<<" "<<mp[x]<<endl;
for(int i=v.size()-2;i>=0;i--)
if(mp[v[i]]<mp[v[v.size()-1]]){
cout<<v[i]<<endl;
break;
}
}
}

