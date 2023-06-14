#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
string s=to_string(n);
map<char,int>mc;
for(int i=0;i<s.size();i++)
{
if(!mc[s[i]] && s[i]<='5') ++mc[s[i]];
else return 0;
}
return 1;
}
int main()
{
int t,l,r;
cin>>t;
while(t--)
{
int cnt=0;
cin>>l>>r;
for(int i=l;i<=r;i++)
if(check(i))
++cnt;
cout<<cnt<<"\n";
}
}
