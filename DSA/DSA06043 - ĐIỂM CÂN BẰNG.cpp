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
int n;
cin>>t;
while(t--)
{
cin>>n;
int a[n],s=0,ans=-1;
for(int i=0;i<n;i++)
{
cin>>a[i];
s+=a[i];
}
int tmp=0;
for(int i=1;i<n-1;i++)
{
tmp+=a[i-1];
if(s-a[i]-tmp==tmp){
ans=i+1;
break;
}
}
cout<<ans<<endl;
}
}

