#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#define cout(n) cout<<n<<endl;
#include <algorithm>
#define cin(n) cin>>n;
#define ll long long
using namespace std;
ll solve(ll n)
{
ll k=2;
for(ll i=2;i<=sqrt(n);i++)
{
if(n%i==0)
k=max(k,i);
while(n%i==0) n/=i;
}
k=max(k,n);
return k;
}
int main()
{
int t,n;
ll a,b;
cin>>t;
while(t--)
{
cin>>a;
cout<<solve(a)<<endl;
}
}
