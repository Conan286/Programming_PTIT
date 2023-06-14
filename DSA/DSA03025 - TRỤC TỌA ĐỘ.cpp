#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
return a.second<b.second;
}
int ans(vector<pair<ll,ll>> &v,int n)
{
int cnt=0;
ll t=0;
for(int i=0;i<n;i++)
{
if(t<=v[i].first)
{
cnt++;
t=v[i].second;
}
}
return cnt;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll a[n],b[n];
vector<pair<ll,ll>>v;
for(int i=0;i<n;i++) {
cin>>a[i]>>b[i];
v.push_back(make_pair(a[i],b[i]));
}
sort(v.begin(),v.end(),cmp);
cout<<ans(v,n)<<endl;
}
}

