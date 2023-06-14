#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
int n,k;
cin>>t;
while(t--)
{
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++) cin>>a[i];
int j=n-1;
while(a[j]>a[j+1]&&j>0) j--;
int i=n;
while(a[j]>a[i]) i--;
swap(a[i],a[j]);
reverse(a+j+1,a+n+1);
for(int i=1;i<=n;i++) cout<<a[i]<<" "; cout<<endl;
}
}
