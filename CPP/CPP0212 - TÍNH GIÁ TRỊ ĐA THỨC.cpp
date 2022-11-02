#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include <algorithm>
#include<sstream>
#define ll long long
#define yes puts("Yes");
#define no puts("N/o");
#define N 1001
using namespace std;
ll m=1e9+7;
ll pow(ll a, ll b) {
    if (b == 0) return 1 ;
    if(b==1) return a;
    if(b%2==0) return pow(a*a%m,b/2)%m;
    else return a%m*pow(a*a%m,b/2)%m;
}
ll solve(ll a[],ll n,ll x)
{
ll mu=n-1;
ll s=0;
for(ll i=0;i<n;i++)
s=(s+a[i]*pow(x,mu--))%m;
return s;
}
void nhap(ll a[],ll n)
{
for(ll i=0;i<n;i++)
cin>>a[i];
}
main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
ll n,x;
string a;
cin>>t;
while(t--)
{
cin>>n>>x;
ll a[n];
nhap(a,n);
cout<<solve(a,n,x)<<endl;
}
}
