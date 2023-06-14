#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
ll cnt=0;
cin>>n>>k;
ll a[n];
map<ll,int>mp;
mp.clear();
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;
}
for(int i=0;i<n;i++){
 cnt+=mp[k-a[i]];
 if(k-a[i]==a[i]) --cnt;
}
cout<<cnt/2<<endl;
}
}

