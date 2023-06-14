#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
int n,k;
cin>>t;
while(t--)
{
cin>>k>>n;
int a[n+1];
for(int i=1;i<=n;i++) cin>>a[i];
int j=n;
while(a[j]==k+j-n) j--;
if(j==0) for(int i=1;i<=n;i++) a[i]=i;
else { a[j]++; for(int i=j+1;i<=n;i++) a[i]=a[i-1]+1;}
for(int i=1;i<=n;i++) cout<<a[i]<<" "; cout<<endl;
}
}
