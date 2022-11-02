#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
void solve(int a[],int b[],int n)
{
int l=0,r=n-1;
while(a[l]==b[l])++l;
while(a[r]==b[r])--r;
cout<<l+1<<" "<<r+1<<endl;
}
main()
{
int t,n,x=0;
cin>>t;
while(t--)
{
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
b[i]=a[i];
}
sort(a,a+n);
solve(a,b,n);
}
}


