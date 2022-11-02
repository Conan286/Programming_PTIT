#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 93
using namespace std;
ll gcd(ll a,ll b)
{
if(a%b==0) return b;
else return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
return (ll)a*b/gcd(a,b);
}

void solve(ll a,ll x,ll y)
{
ll k=gcd(x,y);
while(k--) cout<<a;
cout<<endl;
}
main()
{
int t;
ll x,y,a;
cin>>t;
while(t--)
{
cin>>a>>x>>y;
solve(a,x,y);
}
}



