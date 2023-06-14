#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int find(int a[],int b[],int n)
{
for(int i=0;i<n-1;i++) if(a[i]!=b[i]) return i;
return n-1;
}
main()
{
int t,m,n,k;
cin>>t;
while(t--){
cin>>n;
int a[n],s[n];
input(a,n);
for(int i=0;i<n;i++) s[i]=a[i];
for(int i=1;i<n;i++) s[i]=max(s[i],s[i-1]+s[i]);
int ans=s[0];
for(int i=0;i<n;i++) ans=max(ans,s[i]);
cout<<ans<<endl;
}
}

