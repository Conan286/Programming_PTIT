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

void solve(ll x,ll y,ll z,ll n)
{
ll r,k,e,res;
r=lcm(x,y);
r=lcm(r,z);
k=pow(10,n-1);
e=pow(10,n);
res=(k%r==0)?k:(r*(k/r+1));
if(res<e)
cout<<res<<endl;
else puts("-1");
}
main()
{
int t;
ll x,y,z,n;
cin>>t;
while(t--)
{
cin>>x>>y>>z>>n;
solve(x,y,z,n);
}
}



