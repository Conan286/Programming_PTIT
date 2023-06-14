#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,d;
string s;
cin>>t;
while(t--)
{
map<char,int>mp;
cin>>d;
cin>>s;
int res=0,n=s.size(),cnt=0;
for(int i=0;i<n;i++)
mp[s[i]]++;
for(char z:s) res=max(mp[z],res);
cnt=res;
if((cnt-1)*d+1<=n) cout<<1;
else cout<<-1;
cout<<"\n";
}
}
