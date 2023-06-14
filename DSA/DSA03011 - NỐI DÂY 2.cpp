#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m = 1000000007;
ll ans(multiset<ll> &mon)
{
ll len=0;
while(mon.size()!=1)
{
ll x=*mon.begin();
mon.erase(mon.find(x));
ll y=*mon.begin();
mon.erase(mon.find(y));
ll z=(x+y)%m;
len=(len%m+z%m)%m;
mon.insert(z);
}
return len;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll k;
multiset<ll>mon;
for(int i=0;i<n;i++)
{
cin>>k;
mon.insert(k);
}
cout<<ans(mon)<<endl;
}
}
