#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int t,n,x;
cin>>t;
while(t--)
{
cin>>n;
multiset <int>mts;
for(int i=0;i<n;i++)
{
cin>>x;
mts.insert(x);
}
for(auto x:mts) cout<<x<<" ";
puts("");
}
}
