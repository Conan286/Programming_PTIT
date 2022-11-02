#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
#define N 100001
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int res(int l[],int n)
{
int r=0;
for(int i=0;i<n;i++)
r=max(r,l[i]);
return (r==0?-1:r);
}
main()
{
string s;
int t,n;
cin>>t;
map<char,int>p;
vector<char>v;
while(t--)
{
p.clear();
v.clear();
cin>>s;
n=s.size();
for(int i=0;i<n;i++)
{
p[s[i]]++;
}
for(int i=0;i<n;i++)
{
if(p[s[i]]<2)
 v.push_back(s[i]);
}
//sort(v.begin(),v.end());
for(auto x:v) cout<<x;
cout<<endl;
}
}

