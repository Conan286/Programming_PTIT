#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ans(string s,int k)
{
int n=s.size(),cnt=0;
map<char,int>mp;
mp.clear();
for(char x:s) mp[x]++;
while(k--)
{
int val=0;
char t=s[0];
for(auto x:mp)
{
if(x.second>val)
{
val=x.second;
t=x.first;
}
}
mp[t]--;
}
for(auto x:mp) cnt+=x.second*x.second;
return cnt;
}
int main()
{
int t,k;
string s;
cin>>t;
while(t--)
{
cin>>k;
cin>>s;
cout<<ans(s,k)<<endl;
}
}
