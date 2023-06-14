#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
int ans=1,n=s.size();
map<char,int>mp;
mp.clear();
for(auto x:s) mp[x]++;
for(auto x:s) ans=max(ans,mp[x]);
if(n%2!=0) n+=1;
return ans<=n/2;
}
int main()
{
int t,n,k;
cin>>t;
string s;
while(t--)
{
cin>>s;
if(check(s)) cout<<"1\n";
else cout<<"-1\n";
}
}

