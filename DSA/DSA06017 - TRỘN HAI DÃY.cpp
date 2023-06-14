#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n,t,l,r;
cin>>t;
while(t--){
cin>>m>>n;
int a[m],b[n];
vector<int>v;
for(int i=0;i<m;i++){

 cin>>a[i];
 v.push_back(a[i]);
}
for(int i=0;i<n;i++){

 cin>>b[i];
 v.push_back(b[i]);
}
sort(v.begin(),v.end());
for(auto k:v) cout<<k<<" ";
cout<<"\n";
}
}
