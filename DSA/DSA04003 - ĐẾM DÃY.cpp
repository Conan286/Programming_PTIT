#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=123456789;
ll pow(int a,ll b)
{
if(b==0) return 1;
ll x=pow(a,b/2);
if(b%2==0) return x*x%mod;
else return a*(x*x%mod)%mod;
}
int main()
{
int t;
ll n;
cin>>t;
while(t--)
{
cin>>n;
cout<<pow(2,n-1)<<endl;
}
}

