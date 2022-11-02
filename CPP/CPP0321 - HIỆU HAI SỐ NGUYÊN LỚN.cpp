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
void solve(string a,string b)
{
if(sosanh(a,b)==0) swap(a,b);
string s1=a,s2=b,s="";
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());
while(s2.size()!=s1.size())
s2+="0";
int n=s1.size(),res=0,k;
for(int i=0;i<n;i++)
{
k=(s1[i]-'0')-(s2[i]-'0')-res;
res=(k<0?1:0);
k=(k<0)?(k+10):k;
s+=(k+'0');
}
reverse(s.begin(),s.end());
cout<<s<<endl;
}
main()
{
int t,n;
string a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
solve(a,b);
}
}
