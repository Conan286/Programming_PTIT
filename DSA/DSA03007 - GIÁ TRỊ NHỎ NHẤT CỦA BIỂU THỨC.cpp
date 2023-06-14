#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(int a,int b)
{
return a>b;
}
void solve(ll a[],ll b[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
ll ans1=0;
sort(a,a+n,cmp);
sort(b,b+n);
for(int i=0;i<n;i++) ans1+=a[i]*b[i];
cout<<ans1<<endl;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll a[n],b[n];
solve(a,b,n);
}
}
