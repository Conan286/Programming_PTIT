#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
int ans=max(max(a[0]*a[1],a[n-1]*a[n-2]),max(a[n-1]*a[n-2]*a[n-3],a[n-1]*a[0]*a[1]));
cout<<ans;
}
