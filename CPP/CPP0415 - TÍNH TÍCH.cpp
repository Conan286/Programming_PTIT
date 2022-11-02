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
int t,m,n,x=0;
cin>>t;
while(t--)
{
cin>>m>>n;
int a[m],b[n];
for(int i=0;i<m;i++)
{
cin>>a[i];

}
for(int i=0;i<n;i++)
{
cin>>b[i];

}
sort(a,a+n);
sort(b,b+n);
cout<<(ll)a[n-1]*b[0]<<endl;
}
}


