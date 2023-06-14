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
for(int i=0;i<n;i++) cout<<b[i]<<" "; cout<<endl;
}
}
