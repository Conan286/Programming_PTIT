#include<bits/stdc++.h>
#define ll long long
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
int main()
{
int t;
int n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n];
input(a,n);
for(int i=0;i<=n-k;i++)
{
int res=0;
for(int j=i;j<i+k;j++)
res=max(res,a[j]);
cout<<res<<" ";
}
cout<<endl;
}
}

