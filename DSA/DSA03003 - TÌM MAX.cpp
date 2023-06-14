#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1000000007;
int main()
{
int t,n,k;
cin>>t;
while(t--){
cin>>n;
vector<ll>a;
for(int i=0;i<n;i++)
{
cin>>k;
a.push_back(k);
}
sort(a.begin(),a.end());
ll s=0;
for(int i=0;i<n;i++)
{
s+=(a[i]*i)%mod;
s=s%mod;
}
cout<<s<<endl;
}
}

