#include<iostream>
#include<set>
#define ll long long
using namespace std;
int n,k;
void solve(multiset<ll> &mul)
{
ll ans = 0;
while(mul.size()>=k)
{
ll sum = 0;
ll max = 0;
ll min = INT_MAX;
int cc = 0;
while(cc<k)
{
auto it = mul.begin();
max = max>*it?max:*it;
min = min<*it?min:*it;
sum += *it;
mul.erase(it);

cc++;
}
mul.insert(sum);
ans += max - min;
}
if(mul.size()==1) cout<<ans;
else{
ll sum = 0;
ll max = 0;
ll min = INT_MAX;
for(auto it = mul.begin(); it!= mul.end();it++)
{
max = max>*it?max:*it;
min = min<*it?min:*it;
sum+=*it;
}
ans += max - min;
cout<<ans;
}
}
int main()
{
cin>>n>>k;
ll a[n],sum = 0;
multiset<ll>mul;
for(int i = 0; i < n; i++)
{
cin>>a[i];
mul.insert(a[i]);
sum += a[i];
}
cout<<sum<<"\n";
solve(mul);
}
