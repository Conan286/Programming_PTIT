#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
using namespace std;
void output(ll a[],vector<ll>&v,int n)
{
for(auto x:v) cout<<x<<" ";
int z=v.size();
for(int i=0;i<n-z;i++) cout<<0<<" ";
puts("");
}
main()
{
int t,k,n;
cin>>t;
vector<ll>v;
while(t--){
v.clear();
cin>>n;
ll a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]>0)
v.push_back(a[i]);
}
//sort(v.begin(),v.end());
output(a,v,n);
}
}




