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
using namespace std;
bool sosanh(string a,string b)
{
if(a.size()==b.size()) return a>b;
else return a.size()>b.size();
}
string sum(string a,string b)
{
if(sosanh(a,b)==0) swap(a,b);
string s1=a,s2=b,s="";
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());
while(s2.size()!=s1.size())
s2+="0";
int n=s1.size(),res=0,k;
for(int i=0;i<n-1;i++)
{
k=(s1[i]-'0')+(s2[i]-'0')+res;
res=(k>9?1:0);
k=(k>9)?(k-10):k;
s+=(k+'0');
}
int i=n-1;
k=(s1[i]-'0')+(s2[i]-'0')+res;
reverse(s.begin(),s.end());
s=to_string(k)+s;
return s;
}
main()
{
int t,n;
string a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
cout<<sum(a,b)<<endl;
}
}
