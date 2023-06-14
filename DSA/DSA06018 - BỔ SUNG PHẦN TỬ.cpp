#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t,l,r;
cin>>t;
while(t--){
cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++){

 cin>>a[i];
 s.insert(a[i]);
}
l=r=a[0];
for(int i=1;i<n;i++)
{
l=min(l,a[i]);
r=max(r,a[i]);
}
cout<<r-l+1-s.size()<<endl;
}
}
