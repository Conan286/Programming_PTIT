#include<iostream>
#include<vector>
using namespace std;
void dsa05040(int a[],int n)
{
vector<int> vl(n,1),vr(n,1);
for(int i=1;i<n;i++)
if(a[i]>a[i-1])
vl[i]+=vl[i-1];
for(int i=n-2;i>0;i--)
if(a[i]>a[i+1])
vr[i]+=vr[i+1];
int ans=1;
for(int i=0;i<n;i++) ans=max(ans,vl[i]+vr[i]-1);
cout<<ans<<endl;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
dsa05040(a,n);
}
}
