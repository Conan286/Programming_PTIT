#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
int n,t,k;
cin>>t;
while(t--){
cin>>n>>k;
int a[n],id=0;
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)
{
int l=i+1,r=n-1;
while(l<r)
{
if(a[l]+a[r]+a[i]==k) { id=1; break; }
else if(a[l]+a[r]+a[i]<k) l++;
else r--;
}
}
if(id==0) puts("NO");
else puts("YES");
}
}
