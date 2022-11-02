#include<bits/stdc++.h>
#define ll long long
#define yes puts("Yes");
#define no puts("No");
using namespace std;
//5 6
//15+7=22
//a=11
//b=4
bool check(ll n,ll m)
{
//sum(1,n)
ll s=n*(n+1)/2;
//chia ra 2 tap a va b sao cho a+b=n va a-b=m
ll a=(s+m)/2,b=(s-m)/2;
if(__gcd(a,b)==1 and (s+m)%2==0) return 1;
return 0;
}
int main()
{
int t;
ll m,n;
cin>>t;
while(t--)
{
cin>>n>>m;
if(check(n,m)) yes
else no
}
}

