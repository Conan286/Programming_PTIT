#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k,cnt=0;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
cin>>a[i];
b[i]=a[i];
}
sort(b,b+n);
//for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
//for(int i=0;i<n;i++) cout<<b[i]<<" "; cout<<endl;
int l=0,r=0;
for(int i=0;i<n;i++) if(a[i]!=b[i]) {l=i; break;}
for(int i=n-1;i>=0;i--) if(a[i]!=b[i]) {r=i; break;}
cout<<l+1<<" "<<r+1<<endl;
}
}
