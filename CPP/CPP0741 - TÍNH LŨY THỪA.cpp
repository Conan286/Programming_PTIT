#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
ll solve(ll x,ll y,ll p)
{
ll res=x%p,m=x%p;
for(int i=1;i<y;i++)
res=(res*m)%p;
return res;
}
main()
{
int t;
ll n,x,y,p;
cin>>t;
while(t--)
{
cin>>x>>y>>p;
cout<<solve(x,y,p)<<endl;
}
}

