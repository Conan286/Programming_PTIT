#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<int,int>mp;
bool cmp(int a,int b)
{
if(mp[a]!=mp[b]) return mp[a]>mp[b];
else return a<b;
}
int main()
{
int n,t,k;
cin>>t;
while(t--){
mp.clear();
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;
}
sort(a,a+n,cmp);
for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
}
}
