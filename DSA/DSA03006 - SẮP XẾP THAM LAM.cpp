#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
int b[n];
for(int i=0;i<n;i++) b[i]=a[i];
sort(b,b+n);
//1 6 3 4 5 2 7
//1 2 3 4 5 6 7
int l=0,r=n-1;
while(l<r)
{
if(a[l]>a[r]) swap(a[l],a[r]);
l++;r--;
}
for(int i=0;i<n;i++) if(a[i]!=b[i]) return 0;
return 1;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
if(check(a,n)) puts("Yes");
else puts("No");
}
}
