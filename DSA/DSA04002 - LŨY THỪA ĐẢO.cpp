#include<bits/stdc++.h>
#define ll long long
int m=1000000007;
using namespace std;
ll pow(ll n,ll k);
ll dao(ll n);
int main()
{
int t;
cin>>t;
ll n,k;
while(t--)
{
cin>>n;
cout<<pow(n,dao(n))<<endl;
}
}
ll dao(ll n)
{
ll ans=0;
while(n)
{
ans=ans*10+n%10;
n/=10;
}
return ans;
}
ll pow(ll n,ll k)
{
if(k==0) return 1;
ll x=pow(n,k/2);
if(k%2==0) return x*x%m;
return n*((x*x%m))%m;
}
