#include<bits/stdc++.h>
#define ll long long
ll mod=1000000007;
using namespace std;
ll pow(ll a,ll b)
{
if(b==0) return 1;
ll x=pow(a,b/2);
if(b%2==0) return x*x%mod;
return (a%mod)*(x*x%mod)%mod;
}
main()
{
ll a,b;
while(cin>>a>>b)
{
if(a==0&&b==0) break;
cout<<pow(a,b)<<endl;
}
}
