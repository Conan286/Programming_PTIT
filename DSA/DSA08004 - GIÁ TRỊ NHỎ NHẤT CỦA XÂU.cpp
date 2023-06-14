#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(int n,string s)
{
ll ans=0;
map<char,ll>mc;
mc.clear();
for(int i=0;i<s.size();i++) mc[s[i]]++;
while(n--)
{
int max=0;
char s_max=s[0];
for(auto x: mc)
{
if(x.second>max)
{
max=x.second;
s_max=x.first;
}
}
mc[s_max]--;
}
for(auto i:mc){
ans+=i.second*i.second;
}
return ans;
}
int main()
{
int t,n;
string s;
cin>>t;
while(t--)
{
cin>>n;
cin>>s;
cout<<solve(n,s)<<"\n";
}
}
