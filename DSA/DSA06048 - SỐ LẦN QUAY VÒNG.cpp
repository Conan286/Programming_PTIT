#include<bits/stdc++.h>
#define ll long long
using namespace std;
int count(ll a[],int n)
{
int ans=0;
for(int i=1;i<n;i++)
if(a[i]<a[i-1])
ans=i;
return ans;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll a[n];
for(int i=0;i<n;i++) cin>>a[i];
cout<<count(a,n)<<endl;
}
}

