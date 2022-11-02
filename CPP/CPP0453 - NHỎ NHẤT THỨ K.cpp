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
int t,k,n,x;
cin>>t;
vector<int>v;
while(t--){
v.clear();
cin>>n>>k;
for(int i=0;i<n;i++)
{
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
cout<<v[k-1]<<endl;
}
}




