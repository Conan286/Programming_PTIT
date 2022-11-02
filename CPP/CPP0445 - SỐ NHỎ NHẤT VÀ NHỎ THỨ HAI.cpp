#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
void solve(set<int>&s)
{
int n=s.size(),cnt=0;
if(n<2) puts("-1");
else{
for(auto x:s)
{
cout<<x<<" ";
++cnt;
if(cnt==2) break;
}
cout<<endl;
}
}
main()
{
int t,m,n,x=0;
cin>>t;
set<int>s;
while(t--)
{
cin>>n;
s.clear();
int a[n],b[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
s.insert(a[i]);
}
solve(s);
}
}


